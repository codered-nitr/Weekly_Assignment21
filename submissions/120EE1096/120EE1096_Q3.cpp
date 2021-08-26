class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
    vector<int> ans;
    int j=0,k=0;
    //r->itne saare rows c-> itne saare columns
    //j->for row  k-> for col
    while(j<r && k<c)
    {
        for(int i=k;i<c;i++)
        {
            ans.push_back(matrix[j][i]);
        }
        j++;
        for(int i=j;i<r;i++)
        {
            ans.push_back(matrix[i][c-1]);
        }
        c--;
        
        if(j<r)
        {
            for(int i=c-1;i>=k;i--)
            {
               ans.push_back(matrix[r-1][i]);
            }
            r--;
        }
        
        if(k<c)
        {
            for(int i=r-1;i>=j;i--)
            {
                ans.push_back(matrix[i][k]);
            }
            k++;
        }
    }
    return ans;
    }
};
