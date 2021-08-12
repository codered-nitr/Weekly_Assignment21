class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0,s=prices.size(),min=100000;
        for(int i=0 ; i<s ; i++){
          if(prices[i]<min)
              min=prices[i];
           else if(prices[i]-min>max)
               max=prices[i]-min;
        }
        return max;
    }
};
