class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_set<int> c;
    	    
    	for(int i = 0;i<n;i++){
    	   c.insert(a[i]);
    	}
    	    
    	 for(int i = 0;i<m;i++){
    	    c.insert(b[i]);
    	 }
    	    
    	  return c.size() ;
    }
};
