//kadane's algorithm
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int a[], int n){
       
int temp_max=0,max=0,i,count=0; 
	for(i=0;i<n;i++)
	{
		temp_max+=a[i];
		if(temp_max<0)
		temp_max=0;
		if(temp_max>max)
		max=temp_max;
	}
	if(max==0)
	{
	max = a[0];
    for (i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
}
	
	return max;
}
    
        
};
