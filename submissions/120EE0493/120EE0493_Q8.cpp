// Sum of minimum and maximum elements of all subarrays of size k - https://www.geeksforgeeks.org/sum-minimum-maximum-elements-subarrays-size-k/

#include<bits/stdc++.h>
using namespace std;

#define spc " "

int main() {
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        a.push_back(x);
    }

    int k;
    cin>>k;
    set<int> h;
    for(int i=0;i<k-1;i++) {
        h.insert(a[i]);
    }

    int ans = 0;
    for(int i=k-1;i<n;i++) {
        h.insert(a[i]);
        auto temp = (--h.end());
        ans+=(*h.begin() + *temp);
        h.erase(a[i-k+1]);
    }

    cout<<ans<<endl;
    return 0;
}
