class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                return true;
            }
        }
         int a[n];
        a[0]=arr[0];
        for(int i=1;i<n;i++){
            a[i]=a[i-1]+arr[i];
        }
        sort(a,a+n);
        for(int i=0;i<(n-1);i++){
            if(a[i]==a[i+1] or a[i]==0){
                return true;
            }
        }
        return false;
        }
       
    
};
