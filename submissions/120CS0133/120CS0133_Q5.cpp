vector<int> productExceptSelf(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]==0){
                count++;
            }
        }
        int ans = 1,ans2 = 1;
        for(int i = 0; i < nums.size(); i++){
           ans2*=nums[i];
           if(nums[i]!=0) ans*=nums[i];
        }
        vector<int>vect;
        for(int i = 0; i < nums.size(); i++){
           if(nums[i]==0 && count<2){
               vect.push_back(ans);
           }
        else if(nums[i]==0 && count>=2){
               vect.push_back(0);
        }
           else vect.push_back(ans2/nums[i]);
        }
        return vect;
}
