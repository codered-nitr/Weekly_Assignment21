// parenthesis checker
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    
    bool ispar(string x)
    {
       
        stack<char>st;
        for(int i=0;i<x.length();i++){
            char a = x[i];
            if(a=='{' || a=='(' || a=='['){
                st.push(a);
            }
             else if(a=='}' && st.empty()==false && st.top()=='{'){
                st.pop();
            }
            else if(a==')' && st.empty()==false && st.top()=='('){
                st.pop();
            }
            else if(a==']' && st.empty()==false && st.top()=='['){
                st.pop();
            }
            else{
                st.push(a);
            }
        }
        return st.empty();
    }
    };
    
int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
         cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  
