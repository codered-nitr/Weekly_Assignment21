int celebrity(vector<vector<int> >& M, int n) 
    {
        int z=-1;
        for(int i=0;i<n;i++){
            vector<int> temp;
            temp=M[i];
            sort(temp.begin(),temp.end());
            if(temp[0]==temp[n-1]){
                z=i;
                break;
            }
        }
        if(z==-1){
            return z;
        }
        else{
            int count=0;
            for(int i=0;i<n;i++){
                if(i!=z && M[i][z]==1){
                    count++;
                    
                }
            }
            if(count==n-1){
                return z;
            }
            else{
                return -1;
            }
        }
    }
