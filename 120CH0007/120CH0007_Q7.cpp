#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n;
    cin>>n ;
    int in[n]={0} ;
    int out[n]={0} ;
    int arr[n][n] ;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j] ;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==1){
                in[j]++ ;
                out[i]++ ;
            }
        }
    }
    int count=0 ;
    for(int i=0;i<n ;i++){
        if(in[i]==n-1 && out[i]==0){
            count++ ;
        }

    }

    if(count>0){
        cout<<"1 "<<"\n" ;
    }else{
        cout<<"-1"<<"\n" ;
    }
}
