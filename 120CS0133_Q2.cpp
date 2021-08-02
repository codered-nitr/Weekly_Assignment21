//Union of 2 set;

int doUnion(int a[], int n, int b[], int m)  {
        set<int>s;
        s.insert(a,a+n);
        s.insert(b,b+m);
        return s.size();
}
