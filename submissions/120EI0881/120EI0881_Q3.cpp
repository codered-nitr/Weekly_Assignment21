class Solution
{   
    public: 
    
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
     int start_row=0 , start_col=0;
     while (start_row < r && start_col < c) 
     {
        
        for (int i = start_col; i < c; i++) 
        {
            cout << a[start_row][i] << " ";
        }
        k++;
 
        
        for (int i = start_row; i < r; i++)
        {
            cout << a[i][n - 1] << " ";
        }
        n--;
 
        
        if (start_row < r)
        {
            for (int i = c - 1; i >= start_col; i--) 
            {
                cout << a[r - 1][i] << " ";
            }
            m--;
        }
 
        
        if (start_col < c)
        {
            for (int i = r - 1; i >= start_row; i--)
            {
                cout << a[i][start_col] << " ";
            }
            start_col++;
        }
    }
    }
};
