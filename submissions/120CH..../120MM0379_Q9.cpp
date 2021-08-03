//min bracket addition
int solve(string s) {
    stack <char> S;
    for(int i=0;s[i]!='\0';i++)
    {
        char ch=s[i];
        if(ch=='(')
        {
        S.push(ch);
        }
        else 
        {
            if(!S.empty())
            {
            char c=S.top();
            if(c=='(' && ch==')')
            S.pop();
            else
            S.push(ch);
            }
            else 
            S.push(ch);
        }
    }
    int k=S.size();
    return k;
    
}
