//Job Sequencing
class Solution 
{
    public:
     static bool comp(Job a ,Job b){
        return (a.profit>b.profit);
          }
    //Function to find the maximum profit and the number of jobs done.
      vector<int> JobScheduling(Job arr[], int n) 
      {
          int count=0,sum=0;
          sort(arr , arr+n , comp);
          vector<int> answer(n);
          vector<int> slot(n,0);
          for(int i=0 ; i<n ; i++){
              for(int j=min(n,arr[i].dead)-1 ;j>=0 ; j--){
                  if(slot[j]==0){
                      answer[j]=i;
                      slot[j]=1;
                      break;
                    }
              }
          }
          for(int i=0 ; i<n ; i++){
              if(slot[i]==1){
                  count++;
                  sum+=arr[answer[i]].profit;
              }
          }
          vector<int> c;
          c.push_back(count);
          c.push_back(sum);
          return c;
    } 
};
