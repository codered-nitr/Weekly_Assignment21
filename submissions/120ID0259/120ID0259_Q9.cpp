int solve(string s) {
    stack<char> stk;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            stk.push('(');
        }
        else{
            if(!stk.empty()){
                if(stk.top()=='('){
                    stk.pop();
                }
                else{
                    stk.push(')');
                }
            }
            else{
                stk.push(')');
            }
        }
    }
    int ans=stk.size();
    return ans;
}
