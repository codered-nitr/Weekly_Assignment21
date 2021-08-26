#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n;
    cin>>n;
    int arr[n] ;
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    }

    stack<int>s;
    //vector<int>v;
    int ans[n] ={0} ;
    for(int i=n-1;i>=0;i--){
       while( (!s.empty()) && (arr[i]>= s.top())){
           s.pop() ;
       }
       if(!s.empty()){
           
           ans[i]+=s.top() ;
           s.push(arr[i]) ;
       }else if(s.empty()){
           ans[i]+=-1 ;
           s.push(arr[i]) ;
       }

    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" " ;
    }
}
