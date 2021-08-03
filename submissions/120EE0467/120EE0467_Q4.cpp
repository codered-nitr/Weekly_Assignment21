//4
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    if(s1.length()!=s2.length())
    {
        cout<<"NO";
    }
    else
    {
        string s;
        s=s1+s1;
        if(s.find(s2)!=string::npos)
            cout<<"NO";
        else
            cout<<"YES";
    }
    return 0;
