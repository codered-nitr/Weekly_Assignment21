class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
       int s=0,e=n-1,count_she_knows=0 , count_knows_her=0;
       while(s<e)
       {
           if(M[s][e]==1)
            s++;
           else
            e--;
       }
       
       for(int i=0;i<n;i++)
       {
           if(M[i][e]==1)
            count_knows_her++;
           if(M[e][i]==1)
            count_she_knows++;
       }
       if(count_she_knows==0 && count_knows_her==n-1)
        return e;
       else
        return -1;
        // code here 
    }
};
