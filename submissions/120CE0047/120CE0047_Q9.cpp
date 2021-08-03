int solve(string s) {
    int l=0,r=0;
    for (int i=0;i<s.length();i++)
    {
       if(r==0&&s[i]==')')
       l++;
       else if (s[i]=='(')
       r++;
       else
       r--;
    }
    return l+r;
}
