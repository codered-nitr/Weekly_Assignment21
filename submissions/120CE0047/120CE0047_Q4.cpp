 int fib(int n) {
        vector<int> v={0,1};
        if(n>=2)
        {
            for(int i=2;i<=n;i++)
            {
                int p=v[i-1]+v[i-2];
                v.push_back(p);
            }
            return v[n];
        }
        else if(n==1)
            return 1;
        else
            return 0;
    }
