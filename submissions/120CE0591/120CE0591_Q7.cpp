#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int a[n]={0};
 int b[n]={0};
 int arr[n][n];
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
 }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==1){
                a[j]++;
                b[i]++;
            }
        }
    }
    int ct=0;
    for(int i=0;i<n;i++){
        if(a[i]==n-1 && b[i]==0){
            ct++;
        }
    }

    if(ct>0){
        cout<<"1"<<endl;
    }

    else{
        cout<<"-1"<<endl;
    }









    return 0; }
