vector<int> solve(vector<int>& a, vector<int>& b) {
    int n=a.size();
    int m=b.size();
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        ans.push_back(a[i]);
    }

    for(int i=0;i<m;i++)
    {
        ans.push_back(b[i]);
    }

    sort(ans.begin(),ans.end());
    return ans;
}
