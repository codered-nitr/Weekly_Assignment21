#include<bits/stdc++.h> 

using namespace std;

bool areRotations( string s1, string s2){
    bool ans= true;
    int temp;
    if (s1.length() != s2.length())
        return false;
    for (int i = 0; i < s1.length(); i++)
    {
        if(s2[0]==s1[i]){
            temp = i;
        }
    }
    for (int i = 1; i < s2.length(); i++)
    {   
        if(temp==s1.length()-1){
            temp =0;
        }
        else if(s2[i]!=s1[++temp]){
            ans = false;
        }   
    }
    return ans;
}


int main(){
    string s1, s2;
    cin >> s1 >> s2;

    areRotations(s1, s2) ? cout << "true" : cout << "false";
    
    return 0;
}
