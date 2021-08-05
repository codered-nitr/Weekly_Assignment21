//Q9.Min Bracket Addition

#include <bits/stdc++.h>
using namespace std;

bool check(char a,char b)
{   if(a=='(' && b==')')
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
           {stk.push(s[i]);}
           
       }
       
       cout<<stk.size()<<endl;
        
    }

    return 0;
}