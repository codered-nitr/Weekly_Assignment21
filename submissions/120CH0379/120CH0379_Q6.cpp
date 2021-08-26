 void nextPermutation(vector<int>& a) 
    {
        int n=a.size();
        int p=-1;
        for(int i=n-1;i>0;i--)
        {
            if(a[i]>a[i-1])
            {
                p=i-1;
                break;
            }
        }
        if(p==-1)
            sort(a.begin(),a.end());
        else
        {
            int c=0;
            for(int i=p+1;i<n;i++)
            {
                if(a[i]>a[p])
                    c=i;
            }
            int k=a[c];
            a[c]=a[p];
            a[p]=k;
            k=1;
            int m=(n+p+1)/2;
            for(int i=p+1;i<m;i++)
            {
                int t=a[i];
                a[i]=a[n-k];
                a[n-k]=t;
                k++;
            }
        }
    }
