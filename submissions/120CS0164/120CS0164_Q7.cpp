// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        int a = 0;
        int b = n-1;
        int sum=0;
        int celeb;
        while(a<=b){
            if(M[a][b]==1){
                a++;
                celeb = b;
            }
            else 
            if(M[a][b]==0){
                b--;
                celeb = a;
        }
        }
        for(int i = 0;i<n;i++){
            if(M[celeb][i]==1)return -1;
            if(M[i][celeb]==1)sum++;
        }
        if(sum == n-1)return celeb;
        else return -1;
        
        // code here 
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
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends
