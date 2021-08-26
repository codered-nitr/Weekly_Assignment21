#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n1,n2,n3 ;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
   cin>>n1 ;
    for(int i=0;i<n1;i++){
        int x;
        cin>>x;
        v1.push_back(x) ;
    }
    cin>>n2 ;
     for(int i=0;i<n2;i++){
        int x;
        cin>>x;
        v2.push_back(x) ;
    }

    cin>>n3 ;
     for(int i=0;i<n3;i++){
        int x;
        cin>>x;
        v3.push_back(x) ;
    }
    set<int > s;
    vector<int>::iterator it2;
    //it2 = std::find (v2.begin(), v2.end(), v1[i]);
    vector<int>::iterator it3;
    //it3 = std::find (v3.begin(), v3.end(), v1[i]);
    for(int i=0;i<n1;i++){
    it2 = std::find (v2.begin(), v2.end(), v1[i]);
    it3 = std::find (v3.begin(), v3.end(), v1[i]);
    if (it2 != v2.end() && it3 != v3.end()){
        s.insert(v1[i]) ;
    }

    }
    set<int>::iterator itr;
    for (itr = s.begin(); itr != s.end(); itr++)
    {
        cout << *itr<<" ";
    }

}
