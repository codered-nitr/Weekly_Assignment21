#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    vector<int> v ;
    for(int i=0;i<n;i++){
        int x;
        cin>>x ;
        v.push_back(x) ;
    }

    int i=n-2 ;
    while(i>=0 && v[i]>v[i+1]){
        i-- ;
    }
    if(i==-1){
    sort(v.begin(),v.end() ) ;
    }
    else if(i>=0){
        int j=n-1 ;
        while(v[j]<=v[i]){
            j-- ;
        }
        swap(v[i],v[j]) ;
    
    reverse(v.begin()+i+2,v.end()) ;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" " ;
    }


}
