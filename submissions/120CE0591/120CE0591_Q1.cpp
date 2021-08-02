#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sum = a[0];
    int ms = a[0];
    for (int i = 1; i < n; i++)
    {
        sum += a[i];
        if (sum > ms)
        {
            ms = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << ms;

    return 0;
}
