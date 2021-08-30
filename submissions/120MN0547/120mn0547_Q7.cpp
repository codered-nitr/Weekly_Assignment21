#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        // code here
        int start=0, end=1;
        int l,h;
        for(int i=0;i<s.length();i++)
        {
            l=i-1;
            h=i;
            while(l>=0 and h<s.length() and s[l]==s[h])
            {
                if(h-l+1>end)
                {
                    start=l;
                    end=h-l+1;
                    }
                l--;
                h++;
            }
            
            l=i-1;
            h=i+1;
            while(l>=0 and h<s.length() and s[l]==s[h])
            {
                if(h-l+1>end)
                   {
                    start=l;
                    end=h-l+1;
                }
                l--;
                h++;
            }
        }
        string ans;
        for(int i=start;i<start+end;i++)
        {
            ans.push_back(s[i]);
        }
        return ans;
    }
  };

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}

  // } Driver Code Ends
