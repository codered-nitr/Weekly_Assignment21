class Solution {
public:
    bool pos(string s,string t,map<int,int> m)
    {
       int i=0;
       while(i<s.size() && i<t.size())
       {
           int x=m[s[i]],y=m[t[i]];
           if(x>y)return false;
           else if(x<y)return true;
           i++;
       }
        return s.size() <= t.size();
    }
    bool isAlienSorted(vector<string>& words, string order)
    {
        map<int,int> m;
        for(int i=0;i<(int)order.size();i++)
        {
            m[order[i]]=i;
        }
        
        int n = words.size();
        for(int i=0;i<n-1;i++)
        {
            if(pos(words[i],words[i+1],m)==0)return false;
        }
        return true;
    }
};
