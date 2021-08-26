class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int min = prices.at(0);
        int max = 0;
        for(auto itr: prices){
            if(itr < min)min = itr;
                         
            if(itr-min>max)max=itr-min;
            
        }
        return max;
        
    }
};
