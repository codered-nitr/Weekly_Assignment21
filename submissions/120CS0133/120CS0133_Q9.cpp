//Minimum Bracket Addition...
//Time - O(n)
//Space - O(1)


int solve(string s) {
    stack<int>st;
    int ans = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') st.push(')');
        else if(!st.empty() && st.top()==s[i]){
            st.pop();
        }
        else if(st.empty()){
            ans++;
        }
        
    }
    return ans+st.size();
}
