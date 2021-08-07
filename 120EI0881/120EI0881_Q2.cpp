#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++)
        cin>>a[i];
    int r=0,l=n-1,temp;
    while(r<l)
    {
        if(a[r]<0 && a[l]<0)
        {
            r++;
        }
        else if(a[r]<0 && a[l]>0)
        {
            r++;
            l--;
        }
        else if(a[r]>0 && a[l]<0)
        {
            temp=a[r];
            a[r]=a[l];
            a[l]=temp;
        }
        else
        {
            l--;
        }
    }
    for(int i =0;i<n;i++)
        cout<<a[i]<<"\t";
    return 0;
}
