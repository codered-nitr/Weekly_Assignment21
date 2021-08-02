#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b)
{
    return a.second < b.second;
}

int number_of_possible_meetings(vector<int> start, vector<int> end, int n)
{
    vector<pair<int,int>> meeting, result;
    for (int i = 0; i < n; i++)
    {
        auto p = make_pair(start[i], end[i]);
        meeting.push_back(p);
    }
    sort(meeting.begin(), meeting.end(), compare);
    
    result.push_back(meeting[0]);
    int time = result[0].second;

    for (int i = 1; i < n; i++)
    {
        if (meeting[i].first > time)
        {
            result.push_back(meeting[i]);
            time = meeting[i].second;
        }
    }
    return result.size();
}

int main()
{
    int n; //no. of meetings
    cin >> n;
    vector <int> start, end;
    for (int  i = 0; i < n; i++)
    {
        cin >> start[i] >> end[i];
    }

    cout << number_of_possible_meetings(start, end, n);
    return 0;
}