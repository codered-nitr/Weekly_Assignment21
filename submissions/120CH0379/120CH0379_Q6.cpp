class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        stack <char> S1,S2;
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(ch=='#')
            {
                if(!S1.empty())
                    S1.pop();
            }
            else
                S1.push(ch);
        }
        for(int i=0;i<t.length();i++)
        {
            char ch=t[i];
            if(ch=='#')
            {
                if(!S2.empty())
                    S2.pop();
            }
            else
                S2.push(ch);
        }
        if(S1.size()==S2.size())
        {
            int l=S1.size();
            for(int i=0;i<l;i++)
            {
                if(S1.top()==S2.top())
                {
                    S1.pop();
                    S2.pop();
                }
                else
                    return false;
            }
            return true;
        }
        return false;    
    }
};
