//square without  using / * or pow
#include <bits/stdc++.h>
using namespace std;
int square(int n){
    if (n==0)
        return 0;
    if (n<0)
    n=-n;
    if (n%2){
        int x=n >> 1;
        return ((square(x) << 2) + (x << 2) +1);
    }
    else 
    return square(n >> 1) <<2;
}
int main()
{
    int n;
    cin>> n;
    cout <<square(n);
}
