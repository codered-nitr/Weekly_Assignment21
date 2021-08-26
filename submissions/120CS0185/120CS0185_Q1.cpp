//evaluation of postfix expression
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
        stack<int> st;
        for (int i=0;i<s.length();i++){
            if (s[i]>='0' && s[i]<='9')
                st.push(s[i]-'0');
            else{
                switch (s[i]){
                    case '+': {int a= st.top() ;     st.pop();
                                int b= st.top() ;     st.pop();
                                st.push((b+a));
                                break;}
                              
                    case '-': {int a= st.top();     st.pop();
                              int b= st.top();     st.pop();
                              st.push((b-a));
                              break;}
                    
                    case '*': {int a= st.top() ;     st.pop();
                              int b= st.top() ;     st.pop();
                              st.push((b*a));
                              break;}
                    
                    case '/': {int a= st.top() ;     st.pop();
                              int b= st.top() ;     st.pop();
                              st.push((b/a));
                              break;}
                }
            }
        }
        return st.top();
    }
};
