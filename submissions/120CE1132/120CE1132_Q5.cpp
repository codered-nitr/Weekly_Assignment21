vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v;
        int prod=1;
        int c0=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                prod*=nums[i];
            }
            else{
                c0++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0 && c0>=1){
                v.push_back(0);
            }
            else if(nums[i]!=0 && c0==0){
            v.push_back(prod/nums[i]);
            }
            else if(c0>1){
                v.push_back(0);
                //c0--;
            }
            else{
                v.push_back(prod);
            }
            
        }
        return v;
        
    }
