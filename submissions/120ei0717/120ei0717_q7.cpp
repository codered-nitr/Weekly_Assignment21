class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char>as;
        vector<char>at;
        for(int i=0; i<s.length();i++){
            if(s[i]!='#')
                as.push_back(s[i]);
            else if(s[i]=='#'  && as.size()!=0) 
                as.pop_back();
            }
        for(int i=0; i<t.length();i++){
            if(t[i]!='#')
                at.push_back(t[i]);
            else if(t[i]=='#'  && at.size()!=0) 
                at.pop_back();
            }
        if(as.size()!=at.size())
        {return false;}
        int count=0;
        for(int i=0;i<as.size();i++)
            {
                if(as[i]!=at[i]) count++;
            }
            if (count==0) return true;
            return false;       
    }
};
