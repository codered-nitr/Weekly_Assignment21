class Solution{
	public:
int solve(string s) {
    int count=0,i=0;
    stack <int> x;
    for(i;i<s.size();i++)
    {
        if(s[i]=='(')
        x.push(s[i]);
        else if(x.empty()!=1&&s[i]==')')
        x.pop();
        else
        count++;
    }
    count=count+x.size();
    return count;
}
};
