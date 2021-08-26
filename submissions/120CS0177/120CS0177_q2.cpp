#include <bits/stdc++.h>
using namespace std;

int arrUnion(int a1[], int n, int a2[], int m)
{
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(a1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        s.insert(a2[i]);
    }
    set<int>::iterator it;
    int count = 0;
    for (it = s.begin(); it != s.end(); it++)
    {
        count++;
    }
    return count;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int arr1[n], arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
        cin >> arr2[i];
    cout << arrUnion(arr1, n, arr2, m);

    return 0;
}
