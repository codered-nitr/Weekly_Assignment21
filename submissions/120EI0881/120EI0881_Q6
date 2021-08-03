int solve(vector<int>& nums) {
   vector<int> nums_sorted , nums_sortedrev;
   nums_sorted=nums;
   
   sort(nums_sorted.begin() , nums_sorted.end()) ;
   nums_sortedrev=nums_sorted;
   reverse(nums_sortedrev.begin() , nums_sortedrev.end());
   int cost =0 , cost_rev=0;
   vector<int> :: iterator ita= nums.begin();
   vector<int> :: iterator itb=nums_sorted.begin();
   vector<int> :: iterator itc=nums_sortedrev.begin();
  while(ita<nums.end() && itb<nums_sorted.end() && itc<nums_sortedrev.end())
   {
       cost += abs(itb-ita);
       cost_rev += abs(itc-ita);
   }
   return min(cost , cost_rev);
}
