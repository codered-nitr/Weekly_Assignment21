/***Spiral Traversal
https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1**/

// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > arr, int r, int c) 
    { 
       vector<int> a;
        float n = r;
        int i,j;
        int min_i=0,min_j=0;
        while(min_i<r && min_j<c){
            for(j=min_j;j<c;j++){
                
                a.push_back(arr[min_i][j]);
            }
            min_i++;

        for(int i2=min_i;i2<r;i2++){
            
            a.push_back(arr[i2][c-1]);
        }
        c--;
        if(min_i<r)
        for(int j2=c-1;j2>=min_j;j2--){
            
            a.push_back(arr[r-1][j2]);

        }
        r--;
        if(min_j<c)
        for(int i3=r-1;i3>=min_i;i3--){
            a.push_back(arr[i3][min_j]);

        }
        min_j++;
        }
        return a;
    
        // code here 
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
