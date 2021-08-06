bool backspaceCompare(string s, string t) {
        stack<char> s1;
        stack<char> s2;
        int l1=s.length();
        int l2=t.length();
        for(int i=0;i<l1;i++){
            if(s[i]!='#'){
                s1.push(s[i]);
            }
            else if(!s1.empty() && s[i]=='#'){
                s1.pop();
            }
        }
        for(int i=0;i<l2;i++){
            if(t[i]!='#'){
                s2.push(t[i]);
            }
            else if(!s2.empty() && t[i]=='#'){
                s2.pop();
            }
        }
        if(s1.size()!=s2.size()){
            return 0;
        }
        //cout<<s1.size()<<endl;
        int z=s1.size();
        for(int i=0;i<z;i++){
            if(s1.top()==s2.top()){
                s1.pop();
                s2.pop();
            }
            else{
                if(s1.top()!=s2.top()){
                    return false;
                }
            }
        }
        return 1;
        
        
    }
