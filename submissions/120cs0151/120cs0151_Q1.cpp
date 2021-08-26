class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
    int tot_sum=0; 
    int new_sum;
    for(int i=0;i<n;i++)
    {
        new_sum=0;
        for(int j=i;j<n;j++)
        {
            new_sum+=arr[j];
            if(new_sum>tot_sum)
                tot_sum=new_sum;
        }
    }
    return tot_sum;
}
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<maxSubarraySum(arr,n); 
 
    return 0;
    }
};
