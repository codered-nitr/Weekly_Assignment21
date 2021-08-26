// Min cost sort - https://binarysearch.com/problems/Minimum-Cost-Sort

int cost(vector<int> &a, vector<int> &b) {
    int ans = 0, n = a.size();
    for(int i=0;i<n;i++) ans+=(abs(a[i]-b[i]));
    return ans;
}

int solve(vector<int>& nums) {
    vector<int> temp = nums;
    int n = temp.size();
    sort(temp.begin(),temp.end());
    int ans = cost(nums,temp);
    sort(temp.begin(),temp.end(),greater<int>());
    ans = min(ans,cost(temp,nums));
    return ans;
}
