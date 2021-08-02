#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int a[m], b[n];

    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<int> v;
    int i, j;
    for (i = 0, j = 0; (i < m && j < n);)
    {
        if (a[i] < b[j])
        {
            v.push_back(a[i]);
            i++;
        }
        else if (a[i] > b[j])
        {
            v.push_back(b[j]);
            j++;
        }
        else if (a[i] == b[j])
        {
            v.push_back(a[i]);
            i++;
            j++;
        }
    }
    if (m > n)
    {
        for (; i < m; i++)
        {
            v.push_back(a[i]);
        }
    }
    else if (m < n)
    {
        for (; j < n; j++)
        {
            v.push_back(a[j]);
        }
    }

    cout << (v.size());

    return 0;
}
