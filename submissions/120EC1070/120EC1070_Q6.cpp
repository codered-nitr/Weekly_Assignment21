//Minimum Cost Sort
int solve(vector<int>& nums) {
    vector <int> a;
    a=nums;
    int sum=0,sum1=0;
    sort(nums.begin(),nums.end());
    for (int i=0;i<nums.size();i++){
        sum+=abs(nums[i]-a[i]);
    }
    reverse(nums.begin(),nums.end());
    for (int i=0;i<nums.size();i++){
        sum1+=abs(nums[i]-a[i]);
    }
    return min(sum,sum1);
}
