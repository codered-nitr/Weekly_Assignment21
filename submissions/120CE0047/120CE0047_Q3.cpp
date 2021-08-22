bool subArrayExists(int arr[], int n)
    {
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
           sum+=arr[i];
          
         a[i]=sum;
          
        }
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(a[i]==0||a[i]==a[i+1])
            return true;
        }
        
        return false;
        
    }
