#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            int a=0,b=0,c=0;
            set<int> ans;
            vector<int> ans1;
            while (a!=n1 && b!=n2 && c!=n3){
                if (A[a]==B[b] && B[b]==C[c] ){
                    ans.insert(A[a]);a++;b++;c++;
                }
                else {
                    if (A[a]>B[b]){
                        if (B[b]>C[c]){
                            c+=1;
                        }
                        else {
                            b+=1;
                        }
                    }
                    else{
                        if (A[a]>C[c]){
                            c+=1;
                        }
                        else {
                            a+=1;
                        }
                    }
                }
            }
            for (auto x:ans){
                ans1.push_back(x);
            }
            return ans1;
        }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends
