// Move all negative numbers to beginning and positive to end with constant extra space

#include<bits/stdc++.h>
using namespace std;

#define spc " "

void rev(vector<int> &arr, int a, int b) {
    for(int i=a;i<=((b-a)/2 + a);i++) swap(arr[i],arr[b+a-i]);
}

int main() {
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        a.push_back(x);
    }

    int i = 0, j = n-1;
    while(i<n && a[i]<0) i++;
    while(j>=0 && a[j]>=0) j--;
    
    int k = i;
    while(k>=i && k<=j) {
        if(a[k]>=0) swap(a[k++],a[j--]);
        else if(a[k]<0) swap(a[k++],a[i++]);
    }

    rev(a,j+1,n-1);

    for(auto item : a) cout<<item<<spc;
    cout<<endl;
    return 0;
}
