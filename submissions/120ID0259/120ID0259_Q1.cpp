class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int currentMaxSum=0,newMaxSum=0;
        for(int i=0;i<n;i++){
            newMaxSum+=arr[i];
            if(newMaxSum>currentMaxSum){
                currentMaxSum=newMaxSum;
            }
            if(newMaxSum<0){
                newMaxSum=0;
            }
        }
        return currentMaxSum;
    }
};
