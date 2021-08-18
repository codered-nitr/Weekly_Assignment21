 int getPairsCount(int arr[], int n, int k) {
        int c=0;
       unordered_map<int, int> m;
       for(int i=0;i<n;i++)
       {
           
           m[arr[i]]++;
       }
       for(int i=0;i<n;i++)
       {
           if(arr[i]==k-arr[i])
           c=c+(m[arr[i]]-1);
           else
           c=c+m[k-arr[i]];
       }
        return c/2;
    }
