#include<bits/stdc++.h>
#include<cmath>
using namespace std ;

int main(){
    int maxsofar=0;
    
    int n ;
    cin>>n ;

    vector<int>price ;
    for(int i=0;i<n;i++){
       int x;
       cin>>x;
       price.push_back(x) ;  
    }
    int minsofar=price[0] ;
    for(int i=0;i<n;i++){
        minsofar= min(minsofar,price[i]);
        int profit=price[i]-minsofar ;
        maxsofar=max(profit,maxsofar) ;

    }
    cout<<maxsofar<<"\n" ;

}
