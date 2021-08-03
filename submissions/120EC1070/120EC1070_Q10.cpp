#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

bool check(char a,char b){
    if (a=='{' && b=='}'){
        return true;
    }
    else if (a=='(' && b==')'){
        return true;
    }
    else if(a=='[' && b==']'){
        return true;
    }
    else{
        return false;
    }
}
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x){
        // Your code here
        bool ans=false;
        stack <char> s;
        for (int i=0;i<x.length();i++){
            if (x.at(i)=='('||x.at(i)=='{'||x.at(i)=='['){
                s.push(x.at(i));
            }
            else{
                if (s.empty()){
                    ans=false;
                    break;
                }
                else{
                    if (check(s.top(),x.at(i))){
                        s.pop();
                        ans=true;
                    }
                    else{
                        ans=false;
                        break;
                    }
                }
            }
        }
        return (ans&&s.empty());
        }

};

// { Driver Code Starts.

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
}  // } Driver Code Ends
