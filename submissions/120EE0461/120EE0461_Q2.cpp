//Q2.Merge Intervals

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        
        int arr[m+n];
        for(int i=0 ; i<m+n ; i++)
        {cin>>arr[i];}
        sort(arr,arr+(m+n));
        int count=0;
        for(int i=0 ; i<m+n ; i++)
        {if(arr[i+1]!=arr[i])
            {count++;}
        }
        cout<<count<<endl;
        
    }

    return 0;
}