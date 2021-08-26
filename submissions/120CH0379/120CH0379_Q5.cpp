class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            unordered_set<int> a;
            unordered_set<int> b;
            unordered_set<int> c;
             vector <int> v;
            for(int i=0;i<n1;i++)
            a.insert(A[i]);
            for(int i=0;i<n2;i++)
            b.insert(B[i]);
            for(int i=0;i<n3;i++)
            {
                if(a.find(C[i])!=a.end() && b.find(C[i])!=b.end())
                {
                    if(c.find(C[i])==c.end())
                    v.push_back(C[i]);
                    c.insert(C[i]);
                }
            }
            return v;
        }

};
