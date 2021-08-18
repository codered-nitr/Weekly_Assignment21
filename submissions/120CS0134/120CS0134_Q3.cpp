class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>v;
        int n=prices.size();
        v.push_back(prices[n-1]);
        int max=prices[n-1];
        for(int i=1;i<n;i++)
        {
            if(prices[n-1-i]>max)
            {
                max=prices[n-1-i];
            }
            v.push_back(max);
        }
        int ans=0;
        reverse(v.begin(),v.end());
        for(int i=1;i<n;i++)
        {   
            int cal=v[i]-prices[i-1];
            if(cal>ans)
            {
                ans=cal;
            }
        }
        return ans;
    }
};
