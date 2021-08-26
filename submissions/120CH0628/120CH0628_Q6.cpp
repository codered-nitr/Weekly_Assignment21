bool comp(int a, int b){
    return a>b;
}

int solve(vector<int>& a) {

    int n = a.size();
    int ans1=0;
    int ans2=0;
    int b[n], c[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
        c[i] = a[i];
    }
    sort(b, b + n);
    sort(c, c + n, comp);
    for (int i = 0; i <n; i++)
    {
        ans1 += abs(b[i] - a[i]);
    }
    for (int i = 0; i <n; i++)
    {
        ans2 += abs(c[i] - a[i]);
    }
    return min (ans1, ans2);
}
