class Solution{
    public:
    int doUnion(int a[], int n, int b[], int m)  {
    	int i=0;
        unordered_set <int> s;
        for(i;i<n;i++)
        s.insert(a[i]);
        for(i=0;i<m;i++)
        s.insert(b[i]);
        return s.size();
        }
    
};
