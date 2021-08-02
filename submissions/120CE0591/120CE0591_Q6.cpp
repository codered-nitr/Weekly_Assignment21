#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a + n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (abs(a[i] - b[i]));
    }

    int sum2 = 0;
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        sum2 += (abs(a[i] - b[i]));
    }
    int x = min(sum, sum2);
    cout << x;

    return 0;
}
