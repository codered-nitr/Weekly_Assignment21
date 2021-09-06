class Solution {
public:
    int maxProduct(vector<int>& nums) {
     if(nums.size()==0)return 0;
        
        int maxSub=nums[0];
        int minSub=nums[0];
        int maxProdSub=nums[0];
        
        for(int i=1; i<nums.size(); i++){
            if(nums[i]<0)
                swap(maxSub, minSub);
            
            maxSub=max(maxSub*nums[i], nums[i]);
            minSub=min(minSub*nums[i], nums[i]);
            
            maxProdSub=max(maxProdSub, maxSub);
        }
    return maxProdSub;
    }
};
