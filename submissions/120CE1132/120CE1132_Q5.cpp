vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int> ans,ans2;
            
            int i=0,j=0,k=0,l=0;
            while(i<n1 && j<n2){
                if((i>0 && A[i]==A[i-1]) ||( j>0 && B[j]==B[j-1])){
                    if(i>0 && A[i]==A[i-1]){
                        i++;
                    }
                    if(j>0 && B[j]==B[j-1]){
                        j++;
                    }
                }
                else{
                    
                
                    if(A[i]<B[j]){
                        i++;
                    }
                    else if(B[j]<A[i]){
                        j++;
                    }
                    else{
                        ans.push_back(A[i]);
                        i++;
                        j++;
                    }
                }
            }
            i=0;
            j=0;
            B=C;
            while(i<ans.size() && j<n3){
                if((i>0 && ans[i]==ans[i-1]) ||( j>0 && B[j]==B[j-1])){
                    if(i>0 && ans[i]==ans[i-1]){
                        i++;
                    }
                    if(j>0 && B[j]==B[j-1]){
                        j++;
                    }
                }
                else{
                    
                
                    if(ans[i]<B[j]){
                        i++;
                    }
                    else if(B[j]<ans[i]){
                        j++;
                    }
                    else{
                        ans2.push_back(ans[i]);
                        i++;
                        j++;
                    }
                }
                
            }
            return ans2;
        }
