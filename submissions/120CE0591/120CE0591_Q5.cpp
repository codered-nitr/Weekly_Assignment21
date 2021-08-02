#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m, i, j;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    vector<int> v;
    for (i = 0, j = 0; (i < n && j < m);)
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
        else
        {
            v.push_back(a[i]);
            v.push_back(a[i]);
            i++;
            j++;
        }
    }

    
        for (; i < n; i++)
        {
    
            v.push_back(a[i]);
        }
    

   
        for (; j < m; j++)
        {
            v.push_back(b[j]);
        }
    

    for (int k = 0; k < v.size(); k++)
    {
        cout << v[k] << " ";
    }

    return 0;
}
