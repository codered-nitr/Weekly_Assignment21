class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        stack<int > ch;
        int p=0,q=0,r=0;
        for(int i=0 ; i<S.length() ; i++)
        {
         if(S[i]=='+' || S[i]=='*' || S[i]=='-' || S[i]=='/'){
                p=ch.top();
                ch.pop();
                q=ch.top();
                ch.pop();
                if(S[i]=='*')
                r=p*q; 
                else if(S[i]=='+') 
                r=p+q; 
                else if(S[i]=='/')
                r=q/p; 
                else
                r=q-p;
                ch.push(r);
            }
            else
            ch.push(S[i]-'0');
        }
        return ch.top();
    }
};
