int maxSubarraySum(int arr[], int n){
        
       
    int max_final = INT_MIN, max_curr = 0;
 
    for (int i = 0; i < n; i++)
    {
        max_curr = max_curr + arr[i];
        if (max_final < max_curr)
            max_final = max_curr;
 
        if (max_curr < 0)
            max_curr = 0;
    }
    return max_final;
    }
