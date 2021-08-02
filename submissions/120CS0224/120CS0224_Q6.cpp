//Min cost sort
int solve(vector<int>& nums) {
    int sum1=0,sum2=0;
    vector<int> org;
    for(int i=0 ; i<nums.size() ; i++)
         org.push_back(nums[i]);
         sort(nums.begin(),nums.end());
         for(int i=0 ; i<nums.size() ; i++){
             sum1+=abs(nums[i]-org[i]);
         }
         for(int i=0 ; i<nums.size() ; i++){
             sum2+=abs(nums[nums.size()-1-i]-org[i]);
         }
         if(sum1>=sum2)
         return(sum2);
         else
         return(sum1);
}
