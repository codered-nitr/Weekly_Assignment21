class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> stk;
        for(int i=0;i<x.size();i++){
            if(x[i]=='}' || x[i]==')' || x[i]==']'){
                if(stk.empty()){
                    return false;
                }
                else{
                    if(x[i]=='}'){
                        if(stk.top()=='{'){
                            stk.pop();
                        }
                        else{
                        return false;
                        }
                    }
                    else if(x[i]==')' ){
                        if( stk.top()=='('){
                            stk.pop();
                        }
                        else{
                            return false;
                        }
                    }
                    else if(x[i]==']'){
                        if( stk.top()=='['){
                            stk.pop();
                        }
                        else{
                            return false;
                        }
                    }
                }
            }
            else{
                stk.push(x[i]);
            }
        }
        if(!stk.size()){
            return true;
        }
        else{
            return false;
        }
    }

};
