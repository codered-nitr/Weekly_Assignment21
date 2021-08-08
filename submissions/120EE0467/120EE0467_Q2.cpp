#include<bits/stdc++.h>
using namespace std;
void rearrange(int arr[], int n)
{

    vector<int>v;
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
            v.push_back(arr[i]);
        else
            continue; 
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
            v.push_back(arr[i]);
        else
            continue;
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=v[i];
    }
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\n";
}
int main()
{
    int arr[]={-1,2,-3,4,5,6,-7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    rearrange(arr,n);
    printArray(arr,n);
    return 0;
}
