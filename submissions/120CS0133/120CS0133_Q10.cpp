//Parenthesis Checker
//Time - O(n)
//Space - O(n)


bool ispar(string x)
    {
        stack<int>st;
        for(int i = 0;i<x.size();i++){
            
            if(x[i]=='('){
                st.push(')');
            }
            else if(x[i]=='{'){
                st.push('}');
            }
            else if(x[i]=='['){
                st.push(']');
            }
            else{
                if(st.empty() || st.top()!=x[i]) return false;
                st.pop();
            }
        }
        return st.empty();
    }
