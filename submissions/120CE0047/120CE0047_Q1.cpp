 int evaluatePostfix(string s)
    {
        stack <int> st;
        for(int i=0;i<s.length();i++)
        {
            if(!(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'))
            st.push(s[i]-'0');
            else
            {
                int r;
                int x1,x2;
               if(!st.empty())
               {x2=st.top();
               st.pop();
                x1=st.top();
               st.pop();}
               
               switch(s[i])
               {
                   case '+': r=x1+x2;
                             st.push(r);
                             break;
                   case '-': r=x1-x2;
                             st.push(r);
                             break;
                   case '*': r=x1*x2;
                             st.push(r);
                             break;
                   case '/': r=x1/x2;
                             st.push(r);
                             break;
               }
            }
        }
        return st.top();
        
    }
