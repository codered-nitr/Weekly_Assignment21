#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
using namespace std;
#define cint(n) int n;cin>>n;cin.ignore();
#define input(a,n) for(int i=0;i<n;i++) {cint(x);a.pb(x);}
#define int long long int
#define ld long double
#define mod 1000000007
#define endl "\n"
#define pb emplace_back
#define mp make_pair
#define ff first
#define ss second
#define rety  cout<<"YES"<<endl;
#define retn  cout<<"NO"<<endl;
#define rep(i,a,b)    for(int i=a;i<b;i++)
#define repn(i,a,b)   for(int i=a-1;i>=b;i--)
#define odd(xz2) (xz2&1)
#define all(v) v.begin(),v.end()
#define sz(x) (int)x.size()
#define MAXX 9000000000000000000
#define pii pair<int,int>
#define vi vector<int>
#define prec(x)     fixed<<setprecision(x)
#define lb lower_bound
#define ub upper_bound
#define vvi vector<vector<int> >
#define each(i,a) for(auto i : a)
#define vpi vector<pair<int,int> >
#define vvpi vector<vector<pair<int,int> > >
#define light ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define swap(a,b) a ^= b; b ^= a; a ^= b;
#define nodig(N)  floor(log10(N)) + 1;
#define ppc      __builtin_popcount
#define trail0      __builtin_ctz
#define lead0  s    __builtin_clz

template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

const int inf = 1e18;
const int MX = 1e6 + 1;
const double PI = 3.141592653589793238;

bool areRotations(string s1, string s2)
{
   if (s1.length() != s2.length())
        return false;

   string temp = s1 + s1;
  return (temp.find(s2) != string::npos);
}
void merge(int arr1[], int arr2[], int n1,
                             int n2,int arr3[])
                             {
                                 int i = 0, j = 0, k = 0;

                                 while (i<n1 && j <n2)
                                 {

                                     if (arr1[i] < arr2[j])
                                         arr3[k++] = arr1[i++];
                                     else
                                         arr3[k++] = arr2[j++];
                                 }


                                 while (i < n1)
                                     arr3[k++] = arr1[i++];

                                 while (j < n2)
                                     arr3[k++] = arr2[j++];
                             }

signed main(){
    light
    cint(n);
    cint(m);
    int a[n];
    int b[m];
    int arr3[n+m];
    rep(i,0,n)
    {
      cin>>a[i];
    }
    rep(i,0,m)
    {
      cin>>b[i];
    }
   merge(a, b, m, n,arr3);
   for (int i=0; i < n+m; i++)
       cout << arr3[i] << " ";
 }
