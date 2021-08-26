// Job sequencing
#include <bits/stdc++.h>
using namespace std; 

 
struct Job 
{ 
    int id;	 
    int dead; 
    int profit;
}; 


 

class Solution {
  public:
    static bool compare(Job a,Job b)
     {
	    return a.profit>b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        vector <int> ans;
        int avl[n];
        int result[n];
        
        sort(arr,arr+n,compare);
        
        for(int i=0;i<n;i++)avl[i] = 0;
        
        int ct = 0;
        int cost = 0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=min(n,arr[i].dead)-1;j>=0;j--)
             {
                if(avl[j]==0)
                {
                    avl[j] = 1;
                    result[j] = i;
                    break;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(avl[i])
            {
                 ct++;
                 cost = cost + arr[result[i]].profit;
            }
        }
         ans.push_back(ct);
        ans.push_back(cost);
        return ans;
    } 
};


int main() 
{ 
    int t;

    cin >> t;
    
    while(t--){
        int n;
         cin >> n;
        Job arr[n];
        
        
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
     
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
    	
}
