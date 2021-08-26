//Merge intervals...


//Using set
//Time-O(n*log(n)+ m*log(m));
//Space-O(n+m)

int doUnion(int a[], int n, int b[], int m)  {
        set<int>st;
        st.insert(a,a+n);
        st.insert(b,b+m);
        return st.size();
}

//Using map
//Time-O(n+m)
//Space-O(n+m)

/*

int doUnion(int a[], int n, int b[], int m)  {
        map<int,int>mp;
    for(int i = 0;i<n;i++){
         mp.insert({a[i],i});
    }
    for(int i = 0;i< m;i++){
        mp.insert({b[i],i});
    }
    int count=0;
    for(auto x:mp){
        count++;
    }
    
    return count;
    }

*/
