bool check(char a,char b){
    if (a=='(' && b==')'){
        return true;
    }
    else{
        return false;
    }
}
int solve(string s) {
    stack <char> st;
    int count=0;
    for (int i=0;i<s.length();i++){
        if (s.at(i)=='('){
            st.push(s.at(i));
        }
        else {
            if (!st.empty()){
            if (check(st.top(),s.at(i))){
                st.pop();
            }
            else{
                count++;
            }
            }
            else {
                count++;
            }
        }      
    }
    return count+st.size();
}
