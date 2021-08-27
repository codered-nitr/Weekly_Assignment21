// { Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    bool op(char c)
    {
       return c=='+' || c=='-' ||c=='*'||c=='/';
    }
    int value(char c,int x,int y)
    {
        if(c=='+')return x+y;
        if(c=='-')return x-y;
        if(c=='*')return x*y;
        if(c=='/')return x/y;
    }
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
        stack<int> st;
        for(int i=0;i<(int)s.size();i++)
        {
            if(!op(s[i]))st.push(s[i]-'0');
            else
            {
                int x=st.top();st.pop();
                int y=st.top();st.pop();
                int tt = value(s[i],y,x);
                st.push(tt);
            }
        }
        return st.top();
    }
};

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
