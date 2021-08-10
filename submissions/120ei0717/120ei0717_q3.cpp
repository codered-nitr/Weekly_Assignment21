class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low=prices[0];
        int p=0;
    for(int i = 0;i < prices.size();i++)
    {
        if (prices[i] < low)
            low = prices[i];
        else if ((prices[i] - low) > p)
            p = prices[i] - low;
    }
    return p;
    }
};
