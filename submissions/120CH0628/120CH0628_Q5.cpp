vector<int> solve(vector<int>& a, vector<int>& b) {
    int i = 0, j = 0;
    int n = a.size();
    int m = b.size();
    vector<int> ans;
    while (i < n and j < m)
    {
        if (a[i] < b[j])
        {
            ans.push_back(a[i]);
            i++;
        }
        else if (a[i] > b[j])
        {
            ans.push_back(b[j]);
            j++;
        }
        else
        {
            ans.push_back(a[i]);
            ans.push_back(b[j]);
            i++;
            j++;
        }
    }
    while (i < n)
    {
        ans.push_back(a[i]);

        i++;
    }
    while (j < m)
    {
        ans.push_back(b[j]);
        j++;
    }
    return ans;
}
