int maxProfit(vector<int>& prices) {
         int maxi = -1000000000;
         int mini = prices[0];
        int n = prices.size();
         for(int i = 0; i < n; i++){
              maxi = max(maxi,prices[i]-mini);
              mini = min(mini,prices[i]);
         }
        return maxi;
    }
