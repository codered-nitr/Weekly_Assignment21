
int solve(vector<int>& nums) {
    int n = nums.size();
    int i = 0;
    int a[n];
    for (i = 0; i < n; i++) {
        a[i] = nums[i];
    }
    sort(a, a + n);
    int ac = 0, dc = 0;
    for (i = 0; i < n; i++)
      ac += abs(nums[i] - a[i]), dc += abs(a[n - i - 1] - nums[i]);
    return min(ac, dc);
}
