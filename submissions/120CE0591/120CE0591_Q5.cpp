class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int> v;
          
            int ct=0,i,j,k;
            for( i=0,j=0,k=0;(i<n1 && j<n2 && k<n3);){
                if(A[i]==B[j] && B[j]==C[k]){
                    if(v.size()>0){
                   if(v.back()!=A[i] ){
                       v.push_back(A[i]);
                   }
                    }
                    else{
                        v.push_back(A[i]);
                    }
                    i++;j++;k++;
                    ct++;
                }
                else if(A[i]<B[j] ){
                    i++;
                }
                else if(B[j]<C[k]){
                    j++;
                }
                else {
                    k++;
                }
                
                
                
            }
            if(ct==0){
                return {-1};
            }
            else{
                return v;
            }
        }

};
