class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) {
        int ind=-1,sum=0,c=0;
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                sum+=M[i][j];
            }
            if(sum==0)
            {
                ind=i;
                break;
            }
            else
            sum=0;
        }
        if(ind==-1)
        return ind;
        else
        {
            for(int i=0 ; i<n ; i++)
            c+=M[i][ind];
            if(c==(n-1))
            return ind;
            else
            return -1;
        }
    }
};
