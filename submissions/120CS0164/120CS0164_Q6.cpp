
/**Min Cost Sort
https://binarysearch.com/problems/Minimum-Cost-Sort
**/


int solve(vector<int>& nums) {
    int a[nums.size()];
    int ac=0,d=0;
    for(int i =0 ;i<nums.size();i++){
          a[i]=(nums[i]);
    }
    int n= nums.size();
    sort(a, a + n);
    for(int i=0;i<n;i++){
        d = d+abs(a[i]-nums[i]);
        ac = ac+abs(a[i]-nums[n-1-i]);
    }
    return min(ac,d);

}
