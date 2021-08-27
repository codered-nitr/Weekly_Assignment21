#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here 
        int sum=0;
        vector<int> v;set<int> s;
        for (int i=0;i<n;i++){
            sum+=arr[i];
            v.push_back(sum);
        }
        for (int i=0;i<n;i++){
            if (v[i]==0){
                return true;
            }
        }
        for (int i=0;i<n;i++){
            s.insert(v[i]);
        }
        if (s.size()==n) return false;
        else return true;
    }
};

// { Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}  // } Driver Code Ends
