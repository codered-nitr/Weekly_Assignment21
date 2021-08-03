//Q10.Balanced Parantheses

#include <bits/stdc++.h>
using namespace std;

bool check(char a,char b)
{
    if(a=='[' && b==']')
    return true;
    else if(a=='{' && b=='}')
    return true;
    else if(a=='(' && b==')')
    return true;
    else
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       stack<char> stk;
       string s;
       cin>>s;
       
       
       for(int i=0;i<s.length();i++)
       {
           if(stk.size()==0)
           {stk.push(s[i]);}
           else if(check(stk.top(),s[i]))
           {stk.pop();}
           else
           stk.push(s[i]);
       }
       
       if(stk.size()==0)
       { cout<<"TRUE"<<endl;}
       else
       { cout<<"FALSE"<<endl;}
        
    }

    return 0;
}