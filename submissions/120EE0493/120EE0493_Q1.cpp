// Kadane's Algorithm - https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

int maxSubarraySum(int a[], int n) {
    bool all = true;
    int j = 0,sum = 0,mx = -1e6;
    for(int i=0;i<n;i++) {
        sum+=a[i];
        if(a[i]>0) all = false; 
            
        if(sum<0) {
            j = i + 1;
            sum = 0;
        }
            
        mx = max(sum,mx);
    }
       
    if(all) return *(max_element(a,a+n));
    else return mx;
}
