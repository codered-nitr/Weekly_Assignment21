int maxProfit(vector<int>& prices) {
        vector<int> cp;
       int mincp=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<mincp)
            {
                cp.push_back(prices[i]);
                mincp=prices[i];
            }
            else
                cp.push_back(mincp);
        }
        int profit=0;
        for(int i=0;i<prices.size();i++)
        {
           profit=max(profit,prices[i]-cp[i]);
        }
        return profit;
    }
