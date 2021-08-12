class Solution {
public:
    string hoga(string s)
    {
        string ans="";
        for(auto x : s)
        {
            if(x=='#' && ans.size()!=0)ans.pop_back();
            else if(x!='#')ans+=x;                
        }
        return ans;
    }
    bool backspaceCompare(string s, string t) 
    {
        return hoga(s)==hoga(t);
    }
};
