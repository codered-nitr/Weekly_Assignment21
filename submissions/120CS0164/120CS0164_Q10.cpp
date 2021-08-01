/**Balanced Parentheses
https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1**/
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> st;

        for(int i=0;i<x.length();i++){
            if(st.empty())st.push(x[i]);
           else if(x[i]=='}' && st.top()=='{'){

                    st.pop();
                     }
            else if(x[i]==']' && st.top()=='['){

                    st.pop();
                     }
            else if(x[i]==')' && st.top()=='('){

                    st.pop();
                     }
            else st.push(x[i]);
        }

        if(st.empty())return true;
        return false;
        // Your code here
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
