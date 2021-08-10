//spirally traverse
class Solution
{   
    public:  
    
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        
        int r1=0,c1=0;
        vector<int> res;
        
        while(r1!=r && c1!=c)
        {
         
           for(int i=c1; i<c; i++)
               res.push_back(matrix[r1][i]);
           r1++;
           
           
           for(int i=r1; i<r; i++)
               res.push_back(matrix[i][c-1]);
           c--;
           
         
            if(r1<r)
            {
                for(int i=c-1; i>=c1; --i)
                    res.push_back( matrix[r-1][i]);
                r--;
            }
     
            if(c1<c)
            {
                for(int i=r-1; i>=r1; --i)
                    res.push_back( matrix[i][c1]);
                c1++;    
            }   
           
        }
     
        return res;
        
    }
};
