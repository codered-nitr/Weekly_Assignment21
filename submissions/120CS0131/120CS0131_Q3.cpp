class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size=prices.size(),mn=100005, mx= 0;
        vector<int> high(size),low(size);
        for(int i=0; i<size;i++){
          mx=max(mx,prices[size-1-i]);
          mn=min(mn,prices[i]);
                low[i]=mn;
                high[size-1-i]=mx;
        }
    
        int ans=0;
        for(int i=0;i<size;i++){
            ans=max(ans,high[i]-low[i]);
        }
        return ans;
    }
};
