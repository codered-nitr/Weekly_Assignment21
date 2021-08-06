int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int diff=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]>mini){
                if(diff<prices[i]-mini){
                    diff=prices[i]-mini;
                }
            }
            else{
                mini=prices[i];
            }
        }
        return diff;
            
        
    }
