class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      int k=nums.size()-2;
        while(k>=0 && nums[k]>=nums[k+1]){
            k--;
        }
        if(k>=0){
            int j=nums.size()-1;
            while(j>=0 && nums[j]<=nums[k]){
                j--;
            }
            swap(nums[k],nums[j]);
        }
        for(int g=k+1,d=nums.size()-1;g<d;g++,d--){
            swap(nums[g],nums[d]);
        }
    }
};
