//kadane solution
class Solution{
    public:
    int maxSubarraySum(int arr[], int n){
        
        int m=-999999999;int nm=0;
        for(int i=0;i<n;i++)
        {
            nm=nm+arr[i];
            if(nm>m)
            m=nm;
            if(nm<0)
            nm=0;
        }
        return m;
        
    }
};
