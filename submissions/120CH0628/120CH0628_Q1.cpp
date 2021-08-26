class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
        stack<int> st;

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1+ op2);
                break;
            case '-':
                st.push(op1- op2);
                break;
            case '*':
                st.push(op1* op2);
                break;
            case '/':
                st.push(op1/ op2);
                break;
            case '^':
                st.push(pow(op1, op2));
                break;
            
            default:
                break;
            }

        }
    }
    
   return st.top(); 
    }
};
