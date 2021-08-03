#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second == p2.second)
    {
        return false;
    }
    return p1.second < p2.second;
}
int main()
{

    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), cmp);
    int ct = 1;
    for (int i = 0, j = 0; i < (n - 1); i++)
    {
        if (v[i + 1].first > v[j].second)
        {
            ct++;
            j++;
        }
    }

    cout << ct;

    return 0;
}
