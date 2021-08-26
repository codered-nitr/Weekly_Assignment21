#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
   int solve(string s) {
      int o = 0;
      int cnt = 0;
      for(int i = 0; i < s.size(); i++){
         if(s[i] == '('){
            o++;
         } else {
            if(o)
               o--;
            else
               cnt++;
         }
      }
      return cnt + o;
   }
};
int main(){
   Solution ob;
   string s;
   cin>>s;
   cout << (ob.solve(s));
}
