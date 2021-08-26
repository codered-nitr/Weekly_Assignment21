//Min bracket addition
int solve(string s) {
     stack<char> p;
        for(int i=0 ; i<s.length() ; i++){
            if(p.empty())
              p.push(s[i]);
            else if(s[i]==')' && p.top()=='(')
              p.pop();
            else 
              p.push(s[i]);
        }
        return p.size();
}
