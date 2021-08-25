int evaluatePostfix(string S)
    {
        stack<int> s;
        int l=S.length();
        for(int i=0;i<l;i++){
            if(S[i]=='*'){
                int n1=s.top();
                s.pop();
                int n2=s.top();
                s.pop();
                int n=n1*n2;
                s.push(n);
                //cout<<s.top()<<endl;
            }
            else if(S[i]=='/'){
                int n1=s.top();
                s.pop();
                int n2=s.top();
                s.pop();
                int n=n2/n1;
                s.push(n);
                //cout<<s.top()<<endl;
                
            }
            else if(S[i]=='+'){
                int n1=s.top();
                s.pop();
                int n2=s.top();
                s.pop();
                int n=n1+n2;
                s.push(n);
                //cout<<s.top()<<endl;
            }
            else if(S[i]=='-'){
                int n1=s.top();
                s.pop();
                int n2=s.top();
                s.pop();
                int n=n2-n1;
                s.push(n);
                //cout<<s.top()<<endl;
            }
            else{
                string req="0";
                req+=S[i];
                int n=stoi(req);
                s.push(n);
            }
        }
        return s.top();
    }
