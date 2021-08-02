//Balanced Parentheses
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> p;
        for(int i=0 ; i<x.length() ; i++){
            if(p.empty())
              p.push(x[i]);
            else if(x[i]==']'&& p.top()=='[' || x[i]=='}' && p.top()=='{' || x[i]==')' && p.top()=='(')
              p.pop();
            else 
              p.push(x[i]);
        }
        if(p.empty())
        return true;
        else
        return false;
    }

};
