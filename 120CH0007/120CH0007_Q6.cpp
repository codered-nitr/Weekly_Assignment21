#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string t ;
    string s1;
    string t1;

    getline (cin,s);
    getline (cin,t);
    for(char x : s){
        if(x=='#'){
            if(!s1.empty()){
                s1.pop_back() ;
            }

        }else{
            s1.push_back(x) ;
        }
    }
    for(char x : t){
        if(x=='#'){
            if(!t1.empty()){
                t1.pop_back() ;
            }

        }else{
            t1.push_back(x) ;
        }
    }

    if( s1==t1) {
        cout<<"true"<<"\n" ;
    }else{
        cout<<"false"<<"\n" ;
    }
}
