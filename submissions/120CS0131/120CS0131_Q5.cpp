//Binery Search Platform
// merge sorted lists
vector<int> solve(vector<int>& a, vector<int>& b) {
    int as=a.size()+ b.size();
    priority_queue<int, vector<int>, greater<int>> st;
    vector<int> v;
    for(auto it: a)
        st.push(it);
    for(auto kt: b)
        st.push(kt);
    for(int i=0;i<as;i++)
       {
           int t=st.top();
           v.push_back(t);
           st.pop();
       } 

    return v;
}
