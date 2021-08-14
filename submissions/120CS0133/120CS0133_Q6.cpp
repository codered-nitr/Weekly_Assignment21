bool backspaceCompare(string s, string t) {
        stack<char>snew,tnew;
        for(int i = 0; i < s.size(); i++){
            if(s[i]!='#'){
                snew.push(s[i]);
            }
            else if(!snew.empty()){
                snew.pop();
            }
        }
        for(int i = 0; i < t.size(); i++){
            if(t[i]!='#'){
                tnew.push(t[i]);
            }
            else if(!tnew.empty()){
                tnew.pop();
            }
        }
        if(snew.size()!=tnew.size()) return false;
        while(!snew.empty()){
            if(snew.top()==tnew.top()){
                snew.pop();
                tnew.pop();
            }
            else return false;
        }
        return true;
    }
