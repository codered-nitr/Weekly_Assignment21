//Merge Sorted List
//Time - O(n logn)
//Space - O(1)


vector<int> solve(vector<int>& a, vector<int>& b) {
    vector<int>ans;
    for(int i = 0; i<a.size();i++){
        ans.push_back(a[i]);
    }
    for(int i = 0; i<b.size();i++){
        ans.push_back(b[i]);
    }
    sort(ans.begin(),ans.end());
    return ans;
}
