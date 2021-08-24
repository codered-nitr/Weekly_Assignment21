int evaluatePostfix(string s)
    {
        stack<int>st;
        for(int i = 0; i < s.length(); i++){
            if(s[i]>='0' && s[i]<='9'){
                st.push(s[i]-'0');
            }
            else{
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                if(s[i]=='+'){
                    st.push(a+b);
                }
                else if(s[i]=='-'){
                    st.push(b-a);
                }
                else if(s[i]=='*'){
                    st.push(a*b);
                }
                if(s[i]=='/'){
                    st.push(b/a);
                }
            }
        }
        return st.top();
    }
