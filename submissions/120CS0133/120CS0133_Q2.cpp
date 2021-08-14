void solve(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<0){
            if(i!=j) swap(arr[i],arr[j]);
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}
