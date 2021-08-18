class Solution {
public:
   int maxProfit(vector<int>& prices) {
                 int n = prices.size();
                 int profit = 0;
                int minStock = INT_MAX;
                for (int i = 0; i < n; i++)
        {
                minStock = min(minStock, prices[i]);
                profit = max(profit, prices[i] - minStock);
        }

                return profit;
        }
};
