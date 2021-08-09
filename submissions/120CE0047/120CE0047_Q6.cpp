 bool backspaceCompare(string s, string t) {
        vector<char> ss;
        vector<char> tt;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='#')
            ss.push_back(s[i]);
            else
               { 
                if(!ss.empty())
                ss.pop_back();
               }
        }
         for(int i=0;i<t.length();i++)
        {
            if(t[i]!='#')
            tt.push_back(t[i]);
            else
               { 
                if(!tt.empty())
                tt.pop_back();
               }
        }
        if(ss==tt)
            return true;
        else
            return false;
    }
