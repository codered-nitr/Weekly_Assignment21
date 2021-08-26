#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n ;
    int arr[n] ;
    int positive=0;
    int zero =0 ;
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
        if(arr[i]>0){
            positive ++ ;
        }
        if(arr[i]==0){
            zero ++ ;
        }
    }

    int yes=0 ;
    int sum=0 ;
    if(positive==n){
        cout<<"NO\n" ;
    }else if(zero>0){
        cout<<"YES\n" ;
    }else{
        for(int i=0;i<n;i++){
            sum=arr[i] ;
            for(int j=i+1;j<n;j++){
                sum+=arr[j] ;
                if(sum==0){
                    yes++ ;
                }
            }
        }


        if(yes>0){
            cout<<"YES\n" ;
        }else{
            cout<<"NO\n" ;
        }
    }

}
