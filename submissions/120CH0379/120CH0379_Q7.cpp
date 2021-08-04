//Activity selection
class Solution
{
    public:
    int maxMeetings(int start[], int end[], int n)
    {
        vector <pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            v.push_back(make_pair(end[i],start[i]));
        }
        sort(v.begin(), v.end());
        
        int t=1,k=0;
        for(int i=0;i<n-1;i++)
        {
            if(v[i+1].second > v[i].first)
            {
            t++;
            }
            else
            {
                k=k+t;
                t=0;
                v[i+1].first=v[i].first;
            }
            
        }
        if(t>0)
        k=k+t;
        return k;
    }
};
