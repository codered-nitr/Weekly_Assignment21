#include <bits/stdc++.h>
using namespace std;
//Author
//Abhas
int doUnion(int a[], int n, int b[], int m);

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
        cin >> b[i];
    cout<<doUnion(a,n,b,m);

    return 0;
}

int doUnion(int a[], int n, int b[], int m)
{
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        v.push_back(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        v.push_back(b[i]);
    }

    set<int>s;
    for(int i=0;i<v.size();i++)
    {
        s.insert(v[i]);
    }
    set<int>::iterator it;
    int count=0;
    for(it=s.begin();it!=s.end();it++)
    {
        count++;
    }
    return count;
}
