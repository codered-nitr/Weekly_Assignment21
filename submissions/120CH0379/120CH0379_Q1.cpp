int getPairsCount(int a[], int n, int k) 
    {
        map <int,int> m;
        
        int p=0;
        for(int i=0;i<n;i++)
        {
            if(m.find(k-a[i])!=m.end())
            p=p+m[k-a[i]];
            m[a[i]]++;
        }
        return p;
    }
