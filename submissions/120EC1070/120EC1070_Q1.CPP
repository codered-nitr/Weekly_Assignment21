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
        // Your code here
        stack<int> st;
        for (int i=0;i<S.length();i++){
            if ((S[i]>='0')&&(S[i]<='9')){
                st.push(S[i]-'0');
            }
            else {
                //int a,b;
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                if (S[i]=='+'){
                    st.push(a+b);
                }
                else if (S[i]=='-'){
                    st.push(b-a);
                }
                else if (S[i]=='*'){
                    st.push(b*a);
                }
                else if (S[i]=='/') {
                    st.push(b/a);
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
