// Celebrity Problem - https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1

int celebrity(vector<vector<int> >& M, int n) {
    for(int i=0;i<n;i++) {
        int sum = 0;
        int temp = -1;
        for(int j=0;j<n;j++) {
            sum+=M[j][i];
            if(M[j][i]==0) temp = j;
        }
         
        if(sum==n-1) {
            bool found = 1;
            for(int j=0;j<n;j++) {
                if(M[i][j]==1) {
                    found = false;
                    break; 
                }
            }
                
            if(found) return temp;
        }
    } 
     
    return -1;
}
