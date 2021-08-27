#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long> ans(n,-1);
        vector<int> v;
        for (int i=0;i<n-1;i++){
            if (arr[i]>=arr[i+1]){
                v.push_back(i);
                //v.push_back(i+1);
            }
            else {
                //v.push_back(i);
                if (v.size()==0){
                    ans[i]=arr[i+1];
                }
                else {
                    v.push_back(i);
                    for (int j=0;j<v.size();j++){
                        if (arr[v[j]]<arr[i+1]){
                            ans[v[j]]=arr[i+1];
                            v.erase(v.begin()+j);
                            j--;
                        }
                    }
                }
            }
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
