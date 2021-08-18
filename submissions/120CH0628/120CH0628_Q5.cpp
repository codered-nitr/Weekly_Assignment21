class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
    vector<int> ans(n);
    int temp = 1, flag= 0;
    for (int i = 0; i < n; i++)
    {
        if(nums[i]!= 0){

            temp *= nums[i];
        }
        else{
            flag ++;
        }  
    }
    for (int i = 0; i < n; i++)
    {
        if (flag > 1) {
            ans[i] = 0;
        }
        else if (flag == 0){
            ans[i] = temp / nums[i];
        }
        else if (flag == 1 && nums[i] != 0) {
            ans[i] = 0;
        }
  
        else
            ans[i] = temp;
    }
    return ans;
    }
};
