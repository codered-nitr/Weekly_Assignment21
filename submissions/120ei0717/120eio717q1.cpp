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
         stack<int>num;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]!='*' && S[i]!='/' && S[i]!='+' && S[i]!='-')
            {
                int m= S[i]- '0';
                    num.push(m);
                    
            }
        
             else if(S[i]=='*')
            {
            int a= num.top(); num.pop();
            int b= num.top(); num.pop();
            int c= a*b;
            num.push(c);
        }
         else if(S[i]=='/')
        {
            int a= num.top(); num.pop();
            int b= num.top(); num.pop();
            int c= b/a;
            num.push(c);
        }
        else  if(S[i]=='+')
        {
            int a= num.top(); num.pop();
            int b= num.top(); num.pop();
            int c= a+b;
            num.push(c);
        }
          if(S[i]=='-')
        {
            int a= num.top(); num.pop();
            int b= num.top(); num.pop();
            int c= b-a;
            num.push(c);
        }
        }
        return num.top();
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
