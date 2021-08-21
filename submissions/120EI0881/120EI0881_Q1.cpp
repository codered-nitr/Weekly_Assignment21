int evaluatePostfix(string S)
    {
        stack<int> s;
        int sum=0;
        for(auto it:S)
        {
            if(it!='+' && it!='-' && it!='*' && it!='/')
                s.push(((int)it-48));
            if(it=='+'  && !s.empty())
            {
                sum=s.top();
                s.pop();
                sum=sum+s.top();
                s.pop();
                s.push(sum);
            }
            if(it=='-'  && !s.empty())
            {
                sum=s.top();
                s.pop();
                sum=s.top()-sum;
                s.pop();
                s.push(sum);
            }
            if(it=='*' && !s.empty())
            {
                sum=s.top();
                s.pop();
                sum=sum*s.top();
                s.pop();
                s.push(sum);
            }
            if(it=='/'  && !s.empty())
            {
                sum=s.top();
                s.pop();
                sum=s.top()/sum;
                s.pop();
                s.push(sum);
            }
            
        }
        return s.top();
    }
