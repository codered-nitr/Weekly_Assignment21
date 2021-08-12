class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> s1;
        vector<char> t1;
        for(int i=0 ; i<s.length() ; i++){
            if(s[i]!='#')
                s1.push_back(s[i]);
            else if(s1.size()>=1)
                s1.pop_back();        
        }
        for(int i=0 ; i<t.length() ; i++){
            if(t[i]!='#')
                t1.push_back(t[i]);
            else if(t1.size()>=1)
                t1.pop_back();        
        }
        if(s1==t1)
            return true;
        else
            return false;
    }
};
