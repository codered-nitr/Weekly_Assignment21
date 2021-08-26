// Longest Palindrome in a String - https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string3411/1

pair<int,int> length_even(stack<char> st, string s, int i) {
    int count = 0;
    while(!st.empty() && i<s.size()) {
        if(s[i]==st.top()) {
            count++;
            i++;
            st.pop();
        } else break;
    }
     
    return {2*count,i-(2*count)};
}
 
pair<int,int> length_odd(stack<char> st, string s, int i) {
    st.pop();
    int count = 0;
    while(!st.empty() && i<s.size()) {
        if(s[i]==st.top()) {
            count++;
            i++;
            st.pop();
        } else break;
    }
     
    return {2*count + 1,i-(2*count + 1)};
}

static bool comp(pair<int,int> a, pair<int,int> b) {
    if(a.first==b.first) return a.second>b.second;
    else return a.first<b.first;
}
    
string longestPalin (string s) {
    stack<char> st;
    int n = s.size();
    pair<int,int> ans {1,0};
    for(int i=0;i<n-1;i++) {
        st.push(s[i]);
        ans = max(ans,max(length_odd(st,s,i+1),length_even(st,s,i+1),comp),comp);
    }
       
    return s.substr(ans.second,ans.first);
}
