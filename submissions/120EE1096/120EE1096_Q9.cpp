int solve(string s) {
    int ans=0;
    int tired=0;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')tired++;
        else tired--;

        if(tired<0)
        {
            ans++;
            tired=0;
        }          
    }
    return (tired+ans);
}
