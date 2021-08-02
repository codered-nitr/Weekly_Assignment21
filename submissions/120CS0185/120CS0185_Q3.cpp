//spiral traversal
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> a; int k = 0;
    int rs = 0, re = r - 1, cs = 0, ce = c - 1;     //cs=column start ce= column end ....and so on

    while (re >= rs && cs <= ce)
    {

        for (int i = cs; i <= ce; i++)
        {
            
            a.push_back(matrix[rs][i]);
            k++;
            if (k >= r * c)
                goto breakpoint;
        }
        rs++;
        for (int i = rs; i <= re; i++)
        {
            
            a.push_back(matrix[i][ce]);
            k++;
            if (k >= r * c)
                goto breakpoint;
        }
        ce--;
        for (int i = ce; i >= cs; i--)
        {
            
            a.push_back(matrix[re][i]);
            k++;
            if (k >= r * c)
                goto breakpoint;
        }
        re--;
        for (int i = re; i >= rs; i--)
        {
           
            a.push_back(matrix[i][cs]);
            k++;
            if (k >= c * r)
                goto breakpoint;
        }
        cs++;
    }
breakpoint:
        return a; 
    }
};
