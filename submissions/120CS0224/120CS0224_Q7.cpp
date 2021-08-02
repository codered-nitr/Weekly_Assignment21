//Activity Selection
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        int count=1;
        vector<pair<int,int>> p(n);
        for(int i=0 ; i<n ; i++){
            p[i].first=end[i];
            p[i].second=start[i];
        }
        sort(p.begin(),p.end());
        for(int i=0 ; i<n-1 ; i++){
            if(p[i+1].second > p[i].first)
            count++;
            else
            p[i+1].first=p[i].first;
        }
        return count;
    }
};
