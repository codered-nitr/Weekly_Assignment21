class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int a[], int n){
        
        // Your code here
        int sum=0;
        int max=0;
        int k=0;
        for(int i=0;i<n;i++){
            if(a[i]<0){
                k++;
            }
        }
        
        if(k==n){
            int max=-27489072;
            for(int i=0;i<n;i++){
                if(a[i]>max){
                    max=a[i];
                }
            }
            return max;
        }
        if(k!=n){
            for(int i=0;i<n;i++){
                if(a[i]<0){
                    if(sum>max){
                        max=sum;
                    }
                }
                sum=sum+a[i];
                if(sum<0){
                    sum=0;
                }
            }
            if(max>sum){
                return max;
            }else{
                return sum;
            }
        }
        
    }
};
