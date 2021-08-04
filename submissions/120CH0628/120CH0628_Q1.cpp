class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        int curr = 0, ans = INT_MIN;
    for (int i = 0; i < n; i++) {
       
        if (arr[i] <= curr + arr[i]) {
            curr += arr[i];
        }

        else {
            curr = arr[i];
        }
        ans = max( ans, curr);
    }

        return ans;
    }
};
