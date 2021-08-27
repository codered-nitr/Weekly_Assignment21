//next permutation
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size() - 2;
        while (i>=0 && nums[i+1] <= nums[i]){
            i--;
        }
        if (i>=0){
            int j=nums.size()-1;
            
            while(nums[j]<=nums[i])
                j--;
            
            int temp=nums[j];
            nums[j]=nums[i];
            nums[i]=temp;
        }
        
        int st=i+1, en=nums.size()-1;
        while (st<en){
            int temp=nums[st];
            nums[st]=nums[en];
            nums[en]=temp;
            st++;
            en--;
        }
    }
};
