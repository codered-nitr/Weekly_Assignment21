bool ispar(string x)
    {
       stack<char> s;
       for (int i=0;i<x.length();i++)
       {
           if(x[i]=='['||x[i]=='{'||x[i]=='(')
           s.push(x[i]);
           
           if(s.empty())
           return false;
           
           
           if(x[i]==')')
           {
               char t=s.top();
               s.pop();
               if (t == '{' || t == '[')
                return false;
           }
           else if(x[i]=='}')
           {
               char t=s.top();
               s.pop();
               if (t == '(' || t == '[')
                return false;
           }
           else if(x[i]==']')
           {
                char t=s.top();
               s.pop();
               if (t == '(' || t == '{')
                return false;
           }
       }
       return (s.empty());
    }
