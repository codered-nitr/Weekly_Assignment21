int doUnion(int a[], int n, int b[], int m)  {
        int c=0;
        int arr[m+n+1];
        arr[m+n]=-1;
        int j=0;
        for(int i=0;i<n;i++){
            arr[j]=a[i];
            j++;
        }
        for(int i=0;i<m;i++){
            arr[j]=b[i];
            j++;
        }
        sort(arr,arr+(m+n));
        for(int i=1;i<m+n+1;i++){
            if(arr[i]!=arr[i-1]){
                c++;
            }
        }
        return c;
        
        
    }
