int getPairsCount(int arr[], int n, int k) {
        int ans = 0;
        map<int,int>mp;
        for(int i = 0;i<n;i++){
                mp[arr[i]]++;
        }
        for(int i = 0; i<n;i++){
           if(k-arr[i]>0 && mp[k-arr[i]]>0){
              mp[arr[i]]--;
              ans+=mp[k-arr[i]];
           }
        }
        return ans;
  }
