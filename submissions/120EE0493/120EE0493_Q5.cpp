// Common elements - https://practice.geeksforgeeks.org/problems/common-elements1132/1

vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3) {
    int i=0,j=0,k=0;
    vector<int> ans;
    while(i<n1 && j<n2 && k<n3) {
        if(A[i]==B[j] && A[i]==C[k]) {
            if(ans.size()==0 || ans.back()!=A[i]) ans.push_back(A[i]);
            i++;
            j++;
            k++;
            continue;
        }
              
        vector<int> temp = {A[i],B[j],C[k]};
        sort(temp.begin(),temp.end());
        if(A[i]==temp[0]) i++;
        else if(B[j]==temp[0]) j++;
        else if(C[k]==temp[0]) k++;
    }
            
    return ans;
}
