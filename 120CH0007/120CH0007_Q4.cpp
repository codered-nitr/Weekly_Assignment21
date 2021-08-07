#include<bits/stdc++.h>
using namespace std ;
int f(int n){
    if(n<2){
        return n;
    }
    int a =0 ;
    int b=1 ;
    while(n-- >1){
        int sum=a+b ;
        a=b;
        b=sum ;
    }
    return b ;
}

int main(){
   int n;
    cin>>n ; 

    cout<<f(n) <<"\n" ;
}
