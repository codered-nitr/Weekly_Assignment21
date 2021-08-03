int solve(vector<int>& a) {
    int n = a.size();
    int b[n];
    for (int i = 0; i < n; i++) {
        b[i] = a[i];
    }
    
    sort(b, b + n);
    int c = 0, d = 0;

    for (int i = 0; i < n; i++) {
        
        if(a[i]-b[i]>0){
            c=c+(a[i]-b[i]);
        }else{
            c=c-(a[i]-b[i]);
        }

        if(b[n - i - 1] - a[i]>0){
            d=d+(b[n - i - 1] - a[i]);
        }else{
            d=d-(b[n - i - 1] - a[i]);
        }
       
    }
    return min(c, d);
}
