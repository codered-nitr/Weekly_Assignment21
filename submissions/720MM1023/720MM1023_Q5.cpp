vector<int> solve(vector<int>& a, vector<int>& b) {
    vector<int> ans;
    int l1=a.size();
    int l2=b.size();
    int i=0,j=0;
    while(i<=l1 && j<=l2){
        if(i<l1 && j<l2){
            if(a[i]<b[j]){
                ans.push_back(a[i]);
                i++;
            }
            else{
                ans.push_back(b[j]);
                j++;
            }
        }
        else if(i==l1 && j<l2){
            ans.push_back(b[j]);
            j++;
        }
        else if(j==l2 && i<l1){
            ans.push_back(a[i]);
            i++;
        }
        else if(i==l1 && j==l2){
            return ans;
        }
    }
    return ans;
}
