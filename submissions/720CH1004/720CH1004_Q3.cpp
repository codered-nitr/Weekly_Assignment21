class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),profit=0,min=prices[0];
        for(int i=1;i<n;i++)
        {
            if(prices[i]<min)
                min=prices[i];
            if(prices[i]-min>profit)
                profit=prices[i]-min;
        }
        return profit;
    }
};
