//
class Solution{
    public:
    bool binarysearch(int *a,int l,int key){
        int st = 0, en = l - 1;
    while (st < en)
    {
        int mid = (st + en) / 2;
        if (a[mid] == key)
            return true;
        else if (a[mid] > key)
        {
            en = mid - 1;
        }
        else
            st = mid + 1;
    }
    return false;
} 
    
    public:
    //Function to return the count of number of elements in union of two arrays.
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
    
};
