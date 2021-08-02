//Spiral Traversal
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> s;
    int cr=0,cl=0;
    while(cr<r && cl<c){
        for(int i=cl ; i<c ; i++){
            s.push_back(matrix[cr][i]);
        }
        cr++;
        for(int i=cr ; i<r ; i++){
            s.push_back(matrix[i][c-1]);
        }
        c--;
        if(cr<r){
            for(int i=c-1 ; i>=cl ; i--){
                s.push_back(matrix[r-1][i]);
            }
            r--;
        }
        if(cl<c){
            for(int i=r-1 ; i>=cr ; i--){
                 s.push_back(matrix[i][cl]);
            }
            cl++;
        }
    }
    return s;
    }
};
