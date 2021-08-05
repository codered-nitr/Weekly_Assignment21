// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/
bool comp( Job a, Job b){
    return a.profit > b.profit;
}


class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
       int max[102]={0},COUNT=0,sum=0,s=0;
       memset(max,0,102);
       //comparator_class comp;
  
       sort(arr,arr+n,comp);

       for(int i=0;i<n;i++){
            int date = arr[i].dead;
            s+=arr[i].profit;
            for(int j=date;j>0;j--){
                if(max[j]==0)
                 {
                     max[j]=arr[i].profit;
                     COUNT++;
                        //cout<<"choosing"<<arr[i].id<<'\n';

                     break;
                 }
            }
       }
      // cout<<"s= "<<s<<'\n';
       for(int i=1;i<=100;i++){
           sum+=max[i];
       }
        vector<int> v={COUNT,sum};
       
      
       return v;
    }
    
};

// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends
