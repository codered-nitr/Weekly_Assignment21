//Kdanae's Algo....

//Time - O(n)
//Space - O(1)

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


/*
Time - O(n^2)
//--brute force solution possible using nested loops

int solve2(int arr[],int n){
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            ans = max(sum,ans);
        }
        
    }
    return ans;
}


*/
