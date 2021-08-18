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

    for (int i = 0, j = (n - 1); i < j;)
    {
        if (a[i] > 0 && a[j] < 0)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
        else if (a[i] < 0 && a[j] > 0)
        {

            i++;
            j--;
        }
        else if (a[i] < 0 && a[j] < 0)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
