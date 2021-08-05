class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    bool comp(pair<int, int> p1, pair<int, int> p2)
    {
    return p1.second < p2.second;
    }

    int maxMeetings(int start[], int end[], int n)
    {
    vector<pair<int , int>> m(n);

    for (int i = 0; i < n; i++)
    {
        m[i].first = start[i];
        m[i].second = end[i];
    }
    sort(m.begin(), m.end(), comp);
    int ans = 1;
    int temp = m[0].second;
    for (int i = 1; i < n; i++)
    {
        if (m[i].first > temp)
        {
            ans++;
            temp = m[i].second;
        }
    }
    return ans;
    }
};
