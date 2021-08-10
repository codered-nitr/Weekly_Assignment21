// Product of Array Except Self - https://leetcode.com/problems/product-of-array-except-self/

vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> pre(1,nums[0]);
    int n = nums.size();
    for(int i=1;i<n;i++) pre.push_back(nums[i]*(pre.back()));
    int p = 1;
    vector<int> ans(n,0);
    for(int i=n-1;i>0;i--) {
        ans[i] = p*pre[i-1];
        p*=nums[i];
    }
        
    ans[0] = p;
    return ans;
}
