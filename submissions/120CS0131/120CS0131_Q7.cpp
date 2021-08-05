//Activity Selection
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

bool comp(const pair<int,int> &a,const pair<int,int> &b ){
    return a.second < b.second;
}
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        bool selected[n];
        vector<pair<int,int>> v(n+1);
        v[0].first=-1;v[0].second=-1;
        for(int i=0;i<n;i++){
            v[i+1].first=start[i];
            v[i+1].second=end[i];
        }
        sort(v.begin(),v.end(),comp);
        int last=0,count=0;
        for(int i=1;i<=n;i++){
            if(v[i].first>v[last].second){
                last=i;
                count++;
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
} // } Driver Code Ends 
