// Best Time to Buy and Sell Stock - https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

int maxProfit(vector<int>& prices) {
    int max_cost = prices.back(), profit = 0;
    for(int i=prices.size()-2;i>=0;i--) {
        profit = max(profit,max_cost - prices[i]);
        max_cost = max(max_cost,prices[i]);
    }
        
    return profit;
}
