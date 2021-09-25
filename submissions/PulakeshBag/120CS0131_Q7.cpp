class Solution {
public:
    string removeKdigits(string num, int k) {
        int len=num.length();
        string stk;
        for( int i=0;i<len ;i++)
        {
            while(!stk.empty() && k>0 && stk.back()>num[i])
            {
                stk.pop_back();
                k--;
            }
            stk.push_back(num[i]);
        }
        while(k>0)
        {
            stk.pop_back();
            k--;
        }
        int lead=0;
        while(lead<stk.size() && stk[lead]=='0')
            lead++;
        stk.erase(0,lead);
        if(stk=="")
            stk="0";
        return stk;
            
    }
};
