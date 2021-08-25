long long maxProduct(int *arr, int n) {
        long long ma=arr[0],mi=arr[0];
        long long p=arr[0];
        for(long long int i=1;i<n;i++){
           if(arr[i]<0){
               
               
               swap(ma,mi);
           }
           long long x=arr[i];
           ma=max(x,x*ma);
           mi=min(x,x*mi);
           p=max(p,ma);
               //cout<<mi<<endl;
               
            
           
            
        }
        return p;
        
        // code here
    }
