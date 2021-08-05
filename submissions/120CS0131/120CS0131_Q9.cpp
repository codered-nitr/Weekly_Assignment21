//Binery Search Platform
// Min Bracket addition
int solve(string s) {
     stack<char> stk;
        
        int size=s.size();

        
        for(int i=0;i<size;i++){
            
            char ch=s[i];

            if(i==0)
                stk.push(ch);
             else if( ch==')' && !stk.empty() && stk.top()== '(')
                stk.pop();
            else 
                stk.push(ch);
        }
        return stk.size();
}
