int celebrity(vector<vector<int> >& M, int n) 
    {
       stack<int> s;
       for(int i=0;i<M.size();i++)
       {
           s.push(i);
       }
       while(s.size()>1)
       {
           int p=s.top();
           s.pop();
           int q=s.top();
           s.pop();
           if(M[p][q]==1)
           s.push(q);
           else
           s.push(p);
       }
       int celeb=s.top();
       int sum=0;
       int sum2=0;
        for(int i=0;i<M.size();i++)
        {
            sum+=M[i][celeb];
        }
        for(int i=0;i<M.size();i++)
        {
            sum2+=M[celeb][i];
        }
        
        if(sum==M.size()-1 &&sum2==0)
        return celeb;
        else
        return -1;
    }
