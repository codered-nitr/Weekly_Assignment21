#include <bits/stdc++.h>
using namespace std;

 


bool cmp(pair<int,int> a, pair<int,int> b) {
    return a.second< b.second;
}

class Solution
{
    public:
   
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> gp(n);
         for(int i=0;i<n;i++) {
            gp[i].first = start[i];
            gp[i].second = end[i];
        }
        
        sort(gp.begin(),gp.end(),cmp);
        
        int prev = 0;
        int ans=1;
        
        for(int i=1;i<n;i++) {
            if(gp[i].first>gp[prev].second) {
                ans++;
                prev = i;
            }
        }
           return ans;
    }
};


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
}  
