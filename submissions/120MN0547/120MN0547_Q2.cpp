//Union of two arrays
#include <bits/stdc++.h>
using namespace std;
int main() {
	{
	    int n,m;
	    cin>>n>>m;
	    
	    unordered_set<int> s;
	    int a[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	        if(s.find(a[i]) == s.end())
	            s.insert(a[i]);
	    }
	    
	    int b[m];
	    for(int i=0; i<m;i++)
	    {
	        cin>>b[i];
              if(s.find(b[i]) == s.end())
	            s.insert(b[i]);
	    }
	    
	    cout<<s.size()<<endl;
	}
	
	return 0;
}
