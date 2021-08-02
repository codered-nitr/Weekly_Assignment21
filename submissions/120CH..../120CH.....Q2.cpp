
class Solution{
    public:
    int doUnion(int a[], int n, int b[], int m)  {
        int c[n+m];
        for(int i=0;i<n;i++)
        c[i]=a[i];
        for(int i=0;i<m;i++)
        c[i+n]=b[i];
        map<int,int> f;
        for(int x:c)
        {
            f[x]++;
        }
       int l=f.size();
       return l;
    }
};
