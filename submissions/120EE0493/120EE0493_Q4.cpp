// Maximum Product Subarray - https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1#

long long mx(int *arr, int x, int y) {
    if(x==y && arr[x]<=0) return arr[x];
    
    long long p = 1, ans = 0;
    for(int i=x;i<=y;i++) {
        p*=arr[i];
        ans = max(ans,p);
    }
    
    for(int i=x;i<=y;i++) {
        p/=arr[i];
        ans = max(ans,p);
    }
    
    return ans;
}
	
long long maxProduct(int *arr, int n) {
    long long ans=0;
    int i=0,j=0;
    while(1) {
        if(j==n) {
            ans = max(ans,mx(arr,i,j-1));
            break;
        } else if(arr[j]==0) {
            ans = max(ans,mx(arr,i,j-1));
            i = j+1;
            j++;
        } else j++;
    }
	    
    return ans;
}
