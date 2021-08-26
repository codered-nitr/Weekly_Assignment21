#include <bits/stdc++.h>
using namespace std;
bool isRotation(string a,string b){
    queue<char> q1 ;
    queue<char> q2;
    bool ans=false;
    for (int i=0;i<a.size();i++){
        q1.push(a.at(i));
    }
    for (int i=0;i<b.size();i++){
        q2.push(b.at(i));
    }
    if (a.length()!=b.length()) ;
    else{
        for (int i=0;i<q1.size();i++){
            if (q1==q2) {
                ans = true;
                break;
            }
            else{
                char ch=q1.front();
                q1.pop();
                q1.push(ch);
            }
        }
    }
    return ans;
}
int main (){
    int t;
    cin>>t;
    while (t--){
        cout<<"Enter two strings : ";
        string s1,s2;
        cin>>s1>>s2;
        cout<<isRotation(s1,s2)<<endl;
    }
    return 0;
}
