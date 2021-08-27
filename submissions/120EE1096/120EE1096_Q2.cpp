// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> a, int n){
        stack<long long> st;
        vector<long long> ans(n);
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && a[i]>a[st.top()])
            {
                ans[st.top()]=a[i];
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty())
        {
            ans[st.top()]=-1;
            st.pop();
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends
