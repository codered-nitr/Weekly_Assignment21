
//Q1.Kadane's Algorithm

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
       
        for(int i=0;i<n;i++)
        {cin>>arr[i];}
        
        int sum=0; int max=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum>max)
            {max=sum;}
            else if(sum<0)
            {sum=0;}
        }
        
        cout<<max<<endl;
    }

    return 0;
}