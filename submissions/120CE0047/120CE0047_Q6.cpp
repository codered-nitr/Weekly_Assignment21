int solve(vector<int>& nums) {
    vector<int> r;
    copy(nums.begin(), nums.end(), back_inserter(r));
    sort(nums.begin(), nums.end());
    int sum=0;
    for(int i=0;i<r.size();i++)
    {
       sum+=(abs(r[i]-nums[i]));
    }
  int sum2=0;
   sort(nums.begin(), nums.end(), greater <>());
    for(int i=0;i<r.size();i++)
    {
       sum2+=(abs(r[i]-nums[i]));
    }
    return min(sum,sum2);
}
