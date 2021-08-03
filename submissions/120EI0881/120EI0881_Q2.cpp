class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
    
     set<int, greater<int> > un;
     
     for(int i=0;i<n;i++)  
        un.insert(a[i]);
     
     for(int i=0;i<m;i++)  
        un.insert(b[i]);
    
    return un.size();
        
    }
};
