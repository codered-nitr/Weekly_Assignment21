#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n] ;
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    }
    int leftprod[n] ;
    int rightprod[n] ;
    
    leftprod[0] =1 ;
    rightprod[n-1] =1 ;
    for(int i=1;i<n;i++){
        leftprod[i] = arr[i-1] * leftprod[i-1] ;
    }

    for(int i=n-2 ;i>=0;i--){
        rightprod[i] =arr[i+1] * rightprod[i+1] ;
    }

    int output[n] ;
    for(int i =0;i<n;i++){
        output[i] = leftprod[i] * rightprod[i] ;
       
    }

    for(int i=0;i<n;i++){
        cout<<output[i]<<" " ;
    }


}
