// kadanes algo
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        int cs=0,ms=INT_MIN;
        for (int i=0;i<n;i++){
            cs+=arr[i];
            ms=max(ms,cs);
            if (cs<0)   cs=0;
            
        }
        return ms;
        
    }
};
