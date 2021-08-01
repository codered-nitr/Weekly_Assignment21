/**Min Bracket Addition
https://binarysearch.com/problems/Minimum-Bracket-Addition**/
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    int solve(string x) {
    stack<char> st;
    int popped = 0;

        for(int i=0;i<x.length();i++){
            if(st.empty())st.push(x[i]);

            else if(x[i]==')' && st.top()=='('){

                    st.pop();
                    popped+=2;
                     }
            else st.push(x[i]);
        }

        if(st.empty())return 0;
        return (x.length()-popped);
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
       int ans = obj.solve(a);
        cout<<ans;

   }
}  // } Driver Code Ends
