#include<bits/stdc++.h>
using namespace std;
//Author 
//Abhas 

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {   vector<int>spiral;
        int i,j;
        int count=0;
        int m=r,n=c;
        while(r!=0 && c!=0)
        {
            for(i=n-c;i<c;i++)
            {   if(count>=0 && i>=0)
                spiral.push_back(matrix[count][i]);
            }
            r--;
            count++;
            for(i=m-r;i<r;i++)
            {   if(i>=0 && (m-count)>=0)
                spiral.push_back(matrix[i][m-count]);
            }
            c--;
            for(i=(n-count);i>=n-c-1;i--)
            {   if(i>=0 && (n-count)>=0)
                spiral.push_back(matrix[n-count][i]);
            }
            
            for(i=(m-count-1);i>=m-r;i--)
            {   if(i>=0 && (count-1)>=0)
                spiral.push_back(matrix[i][count-1]);
            }
            


        }
        return spiral;

        // code here 
    }
};

int main(){

return 0;
}
