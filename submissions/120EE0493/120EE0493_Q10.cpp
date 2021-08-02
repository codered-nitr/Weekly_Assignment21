// Balanced Parenthesis - https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1

bool open(char a) {
    return a=='(' || a=='[' || a=='{';
}
  
char complement(char a) {
    if(a=='(') return ')';
    if(a=='[') return ']';
    if(a=='{') return '}';
}
    
bool ispar(string x) {
    stack<char> st;
    int n = x.size();
    for(int i=0;i<n;i++) {
        if(open(x[i])) st.push(x[i]);
        else {
            if(st.empty() || (complement(st.top())!=x[i])) return false;
            else st.pop();
        }
    }
       
    if(st.size()!=0) return false;
    return true;
}
