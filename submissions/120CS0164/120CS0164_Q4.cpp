/**String Rotation
https://www.geeksforgeeks.org/a-program-to-check-if-strings-are-rotations-of-each-other/
**/
#include <bits/stdc++.h>
using namespace std;
class solve{
    public:
    int isRotation(string a , string b){
        queue<char> q1;
        queue<char> q2;
        if(a.length() != b.length())return 0;
        for(int i =0 ;i<a.length();i++){
            q1.push(a[i]);
            q2.push(b[i]);
        }

       if(q1==q2)return 0;
        for(int i =0; i<a.length();i++){
                q1.push(a[i]);
            q1.pop();
            if(q1==q2)return 1;
        }
        return 0;
    }


};
int main(){
    string x,y;
    cin>>x>>y;
    solve ob;
    int ans = ob.isRotation(x,y);
    cout<<ans;

}
