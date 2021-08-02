#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second > p2.second;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    int profit = 0, job = 0;
    int ma = 1;
    for (int i = 0; i < n; i++)
    {
        if (v[i].first > ma)
        {
            ma = v[i].first;
        }
    }

    int b[ma] = {0};
    for (int i = 0; i < n; i++)
    {
        int x = (v[i].first - 1);
        for (int j = x; j >= 0; j--)
        {
            if (b[j] == 0)
            {
                b[j]++;
                job++;
                profit += v[i].second;
                break;
            }
        }
    }

    cout << job << " " << profit;

    return 0;
}
