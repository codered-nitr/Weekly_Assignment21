#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    }
int count=0 ;
unordered_map<int,int> map ;

for(int i=0;i<n;i++){
    if(map.find(k-arr[i])!=map.end()){
        count += map[k-arr[i]] ;   
    }

    map[arr[i]] ++ ;
}

cout<<count <<"\n " ;


}
