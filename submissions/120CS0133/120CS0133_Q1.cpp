int maxSubarraySum(int arr[], int n){
        
        int curr_sum = arr[0];
    int max_sum = arr[0];
    for (int i = 1; i < n; i++)
    {
        curr_sum = max(curr_sum+arr[i],arr[i]);
        max_sum = max(curr_sum,max_sum);
    }
    return max_sum;
        
}
