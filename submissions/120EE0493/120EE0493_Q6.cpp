// Next Permutation - https://leetcode.com/problems/next-permutation/

int nge(vector<int> &nums, int x) {
    int n = nums.size(), ans = x+1;
    for(int i=x;i<n;i++) if(nums[i]>nums[x] && nums[i]<nums[ans]) ans = i;
    return ans;
}
  
void nextPermutation(vector<int>& nums) {
    int n = nums.size(), ans = 0;
    for(int i=n-1;i>=1;i--) {
        if(nums[i]>nums[i-1]) {
            swap(nums[i-1],nums[nge(nums,i-1)]);
            ans = i;
            break;
        }
    }
        
    sort(nums.begin()+ans,nums.end());
    return;
}
