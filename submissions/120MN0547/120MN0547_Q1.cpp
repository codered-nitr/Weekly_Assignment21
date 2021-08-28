#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        // Your code here
        stack<int> st;
        int n = S.length();
        for(int i = 0; i < n; i++) {
            if(S[i] >= 48 && S[i] <= 57)
                st.push(S[i]-48);
            else {
                char op = S[i];
               int op1 = st.top();  st.pop();
                int op2 = st.top();  st.pop();
                switch(op) {
                    case '+': {
                        int result = op2 + op1;
                        st.push(result);
                        break;
                    }
                    case '-': {
                        int result = op2 - op1;
                        st.push(result);
                        break;
                       }
                    case '*': {
                        int result = op2 * op1;
                        st.push(result);
                        break;
                    }
                    case '/': {
                         int result = op2 / op1;
                        st.push(result);
                        break;
                    }
                }
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
