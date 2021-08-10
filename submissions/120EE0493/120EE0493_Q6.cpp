// Backspace String Compare - https://leetcode.com/problems/backspace-string-compare/

bool backspaceCompare(string s, string t) {
    stack<char> a,b;
    for(int i=0;i<s.size();i++) {
        if(s[i]!='#') a.push(s[i]);
        else if(!a.empty()) a.pop();
    }
        
    for(int i=0;i<t.size();i++) {
        if(t[i]!='#') b.push(t[i]);
        else if(!b.empty()) b.pop();
    }
        
    if(a.size()!=b.size()) return 0;
    int n = a.size();
    for(int i=0;i<n;i++) {
        if(a.top()!=b.top()) return false;
        a.pop();b.pop();
    }
        
    return true;
}
