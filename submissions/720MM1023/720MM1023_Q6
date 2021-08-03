int solve(vector<int>& nums) {
    int ans1=0,ans2=0;
    vector<int> s,g;
    
    s=nums;
    g=nums;
    sort(g.begin(),g.end(),greater<int>());
    sort(nums.begin(),nums.end());
    int l=nums.size();
    for(int i=0;i<l;i++){
        ans1+=abs(s[i]-nums[i]);
        ans2+=abs(s[i]-g[i]);
    }
    return min(ans1,ans2);
    
}
