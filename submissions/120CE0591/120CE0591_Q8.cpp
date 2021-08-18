#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin >> n;
    int a[n];
    int k;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int x = 0, y = (k - 1); y <n ; x++, y++)
    {
        int ma = INT_MIN;
        int mi = INT_MAX;
        for (int u = x; u <= y; u++)
        {
            if (a[u] < mi)
            {
                mi = a[u];
            }
            if (a[u] > ma)
            {
                ma = a[u];
            }
        }
        sum += (ma + mi);
    }
    cout << sum;

    return 0;
}
