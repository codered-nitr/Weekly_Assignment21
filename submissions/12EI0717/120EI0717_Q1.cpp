#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){

         int mxsofar = arr[0];
	    int sm = 0;
	    for(int i=0;i<n;i++){
	        sm = sm + arr[i];
	        if(sm>mxsofar){
	            mxsofar = sm;
	        }
	        if(sm < 0){
	            sm = 0;
	        }
	     }
        return mxsofar;
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;

    cin>>t; //input testcases
    while(t--) //while testcases exist
    {

        cin>>n; //input size of array

        int a[n];

        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array

        Solution ob;

        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
