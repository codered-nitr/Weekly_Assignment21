#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define vi vector<int>
#define all(x) x.begin(),x.end()
#define buzz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define prec(x) fixed<<setprecision(x)
const   int M = 1e9+7;

void solve()
{
   int n;cin>>n;
   vi v(n);
   int j=0;
   for(auto &x : v)cin>>x;
   for(int i=0;i<n;i++)
   {
      if(v[i]<0)
      {
         if(i!=j)
         {
            swap(v[i],v[j]);
         }
         j++;
      }
   }
   for(auto x : v)cout<<x<<" ";
   cout<<endl;
}

int main()
{
  buzz
  int t = 1;
  //cin>>t;
  while(t--)
  {
    solve();
  }
}
