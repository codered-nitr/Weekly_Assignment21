//Spiral Traversal
//Time - O(r*c)
//Space - O(r*c)
  vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int>ans;
        int top=0,btm=r-1,lft=0,ryt=c-1;
        int direc = 0;
        while(lft<=ryt && top<=btm){
            if(direc == 0){
                for(int i = lft; i<= ryt; i++){
                    ans.push_back(matrix[top][i]);
                }
                top++;
            }
            else if(direc == 1){
                for(int i = top; i<= btm; i++){
                    ans.push_back(matrix[i][ryt]);
                }
                ryt--;
            }
            else if(direc == 2){
                for(int i = ryt; i>= lft; i--){
                    ans.push_back(matrix[btm][i]);
                }
                btm--;
            }
            else if(direc == 3){
                for(int i = btm; i>= top; i--){
                    ans.push_back(matrix[i][lft]);
                }
                lft++;
            }
            direc = (direc+1)%4;
        }
        
        
        return ans;
    }
