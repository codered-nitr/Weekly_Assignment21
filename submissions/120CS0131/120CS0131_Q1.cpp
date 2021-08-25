// { Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
       stack<int> stk;
       char ch;
       for(int i=0; i<S.length();i++){
           ch=S[i];
           if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
               int b,a,r;
               b=stk.top();
               stk.pop();
               a=stk.top();
               stk.pop();
              if(ch== '+')
                r=a+b;
              else if(ch=='-')
                r=a-b;
              else if(ch=='*')
                r=a*b;
                else if(ch=='/')
                r=a/b;
                
                stk.push(r);
           }
           else{
               stk.push(S[i]-48);
           }
       }
       return stk.top();
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
