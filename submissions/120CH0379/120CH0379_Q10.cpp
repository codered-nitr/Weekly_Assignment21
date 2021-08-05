//Balanced Parentheses
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack <char>S;
        int k=0;
        for(int i=0;x[i]!='\0';i++)
        {
            char ch=x[i];
            if(ch=='('||ch=='{'||ch=='[')
            S.push(ch);
            else
            {
                if(!S.empty())
                {
                    char c=S.top();
                    if(ch==')'&& c=='(')
                        S.pop();
                    else if(ch=='}'&& c=='{')
                       S.pop();
                    else if(ch==']'&& c=='[')
                    S.pop();
                    else 
                    {
                        k=1;
                        break;
                    }
                }
                 else 
                {
                k=1;
                break;
                }
            }
        }
        if(!S.empty()||k==1)
        return false;
        else
        return true;
        
    }


};
