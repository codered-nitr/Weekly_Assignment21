vector<int> solve(vector<int>& a, vector<int>& b) {
    int i=0,j=0;
    vector<int> ans;
    while(i!=a.size() || j!=b.size()){
        if(i!=a.size() && j!=b.size()){
            if(a[i]<b[j]){
                ans.push_back(a[i]);
                i++;
            }
            else if(a[i]>b[j]){
                ans.push_back(b[j]);
                j++;
            }
            else{
                ans.push_back(a[i]);
                ans.push_back(b[j]);
                i++;
                j++;
            }
        }
        else{
            if(i!=a.size()){
                ans.push_back(a[i]);
                i++;
            }
            else{
                ans.push_back(b[j]);
                j++;
            }
        }
    }
    return ans;
}
