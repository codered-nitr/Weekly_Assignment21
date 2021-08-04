#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maxSubarraySum(int arr[], int n){
      int curr=0,max_till_now=0;
      for(int i=0;i<n;i++)
      {
          curr=curr+arr[i];
          max_till_now=max(curr,max_till_now);
          if(curr<0)
          curr=0;
      }
      return max_till_now;
      }
};
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
