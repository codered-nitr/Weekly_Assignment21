//Kadane's algorithm
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        int max=0,max_sofar=arr[0];
        for(int i=0 ; i<n ; i++){
            max+=arr[i];
            if(max>max_sofar)
            max_sofar=max;
            if(max<0)
            max=0;
        }
        return max_sofar;
    }
};
