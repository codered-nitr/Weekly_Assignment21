class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack <int> s;
        int i=0,n;
        n=x.size();
        
        for(i;i<n;i++)
        {
        	
            if(x[i]=='{'||x[i]=='['||x[i]=='(')
            s.push(x[i]);
            else if(x[i]=='}'||x[i]==')'||x[i]==']')
            {
            	if(s.empty())
            	return 0;
            	else if((s.top()=='{'&&x[i]=='}')||(s.top()=='['&&x[i]==']')||(s.top()=='('&&x[i]==')'))
            	s.pop();
            	else return 0;
			}
			else return 0;
            
        }
        if(s.empty())
        return 1;
        else 
        return 0;
}
};
