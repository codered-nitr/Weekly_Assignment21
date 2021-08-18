void solve(int arr[], int n, int k){
    int mini, maxi, ans=0;
    for (int i = 0; i <= n-k; i++)
    {
        maxi = arr[i];
        mini = arr[i];
        for (int j = 0; j < k; j++)
        {
            maxi = max(arr[i+j],maxi);
            mini = min(arr[i+j],mini);
            // cout<<mini<<" "<<maxi<<endl;
        }
            ans+=(maxi+mini);
        // cout<<ans<<endl;
    }
    cout<<ans<<endl;
    
}
