int solve(vector<int>& nums) {
    int v1=0,v2=0;
    vector<int> a=nums,b=nums;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<int>());
    for(int i=0;i<nums.size();i++)
    {
        v1+=abs(nums[i]-a[i]);
        v2+=abs(nums[i]-b[i]);
    }
    return min(v1,v2);
}
