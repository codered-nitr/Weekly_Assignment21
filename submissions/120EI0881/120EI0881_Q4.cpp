#include <bits/stdc++.h>
using namespace std;

bool check(string str1 , string str2) {
	
	if(str1.length()!=str2.length())
	    return false;
	str1 = str1+str1;
	if(str1.find(str2) != string::npos)
	    return true;
	else
	    return false;
    
}
int main()
{
    string st1 , st2;
    cin>>st1;
    cin>>st2;
    if(check(st1 , st2)==1)
        cout<<"True";
    else
        cout<<"False";
    return 0;
}
