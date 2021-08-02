// Merge sorted lists - https://binarysearch.com/problems/Merging-Two-Sorted-Lists

void add_at_last(vector<int> &a, vector<int> &ans, int i) {
    int n = a.size();
    for(int j=i;j<n;j++) ans.push_back(a[j]);
}

vector<int> solve(vector<int>& a, vector<int>& b) {
    int n = a.size(), m = b.size(), i=0, j=0;
    vector<int> ans;
    while(i<n && j<m) {
        if(a[i]<=b[j]) ans.push_back(a[i++]);
        else ans.push_back(b[j++]); 
    }

    if(i<n) add_at_last(a,ans,i);
    else if(j<m) add_at_last(b,ans,j);

    return ans;
}
