//merging sorted arrays
vector<int> solve(vector<int>& a, vector<int>& b) 
{
    vector<int> c;
    for(int i=0;i<a.size();i++)
    {
        c.push_back(a[i]);
    }
    for(int i=0;i<b.size();i++)
    {
        c.push_back(b[i]);
    }
    sort(c.begin(), c.end());
     return c;
}
