class Solution{
    public:
    int maxSubarraySum(int arr[], int n){
      int curr=0,max_till_now=0;
      for(int i=0;i<n;i++)
      {
          curr=curr+arr[i];
          max_till_now=max(curr,max_till_now);
          if(curr<0)
          curr=0;
      }
      return max_till_now;
      }
