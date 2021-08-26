// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
         vector <int> arr;
     
          int k=0;
        int row_strt=0,row_end=r-1,col_strt=0,col_end=c-1;
        
        while(col_strt<=col_end && row_strt<=row_end)
        {  
            //cout<<"printing rowstrt="<<row_strt<<'\n';
            for(int j=col_strt;j<=col_end && col_strt<=col_end && row_strt<=row_end;j++)
                arr.push_back(matrix[row_strt][j]);
            row_strt++;
            
            //cout<<"printing colend="<<col_end<<'\n';
            for(int i=row_strt;i<=row_end && col_strt<=col_end && row_strt<=row_end;i++)
                arr.push_back(matrix[i][col_end]);
            col_end--;
            
           // cout<<"printing rowend="<<row_end<<'\n';
            for(int j=col_end;j>=col_strt && col_strt<=col_end && row_strt<=row_end ;j--)
                arr.push_back(matrix[row_end][j]);
            row_end--;
            
           // cout<<"printing colstrt="<<col_strt<<'\n';
            for(int i=row_end;i>=row_strt && col_strt<=col_end && row_strt<=row_end;i--)
                arr.push_back(matrix[i][col_strt]);
            col_strt++;
        }
        return arr;
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
