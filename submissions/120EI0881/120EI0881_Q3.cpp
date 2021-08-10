class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low=INT_MAX ,p=0,high=INT_MIN; 
        vector<int> :: iterator it;
        for(it=prices.begin();it<=prices.end()-1;it++)
        {
            if(*it>high)
            {
                high=*it;
                p=max(high-low,p);
            }
            if(*it<low)
            {
                low=*it;
                high=0;
            }
        }
        if(p>0)
            return p;
        else
            return 0;
    }
};
