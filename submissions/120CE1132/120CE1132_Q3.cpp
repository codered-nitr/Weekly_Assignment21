bool subArrayExists(int arr[], int n)
    {
        unordered_set<int> v;
        bool ans=0;
        for(int i=1;i<n;i++){
            if(arr[i]==0){
                return 1;
            }
            arr[i]+=arr[i-1];
        }
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                return 1;
            }
            if(v.find(arr[i])!=v.end()){
                return 1;
            }
            v.insert(arr[i]);
        }
        return 0;
    }
