int solve(vector<int>& nums) {
    vector<int>asc;
     vector<int>dsc;
      vector<int>copy;
      for(int i=0;i<nums.size();i++)
     {
         copy.push_back(nums[i]);
     }
     sort(nums.begin(),nums.end());
     int sum1=0;
      for(int i=0;i<nums.size();i++)
     {
         sum1+=abs(nums[i]-copy[i]);
     }
     int sum2=0;
     sort(nums.begin(), nums.end(), greater<int>());
      for(int i=0;i<nums.size();i++)
     {
         sum2+=abs(nums[i]-copy[i]);
     }
     if(sum1>=sum2)
     return sum2;
     else
      return sum1;
}
