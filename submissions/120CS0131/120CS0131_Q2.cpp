// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
         long long a[n+1];
         vector<long long> v(n,0);
           long long mx=-1;
        a[0]=-1;
         for(int i=1;i<n;i++){
             if(arr[i]<=arr[i-1])
                a[i]=-1;
            else
                a[i]=arr[i];
            mx=max(mx,a[i]);
         }
        
         v[n-1]=-1;
         long long m=a[n-1];
       
         for(int i=n-2;i>=0;i--){
            if(arr[i]<m)
                v[i]=m;
            
            int j=i,t=m;
            while(j<=n-1 && arr[i]>=a[j]){
                j++;
        
                if(arr[i]>=mx)
                    j=n;
                else if(arr[i]<a[j])
                  {
                        v[i]=a[j];
                        break;
                  }
            }
             if(j==n)
                    v[i]=-1;
                    
            if(a[i]!=-1)
                m=a[i];  
         }
         return v;
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
