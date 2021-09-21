//finding majority element
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int n)
    {
        
        int mx=a[0],mn=a[0];
    for (int i=0;i<n;i++){
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
    }
    int freq[mx-mn+1]={0};
    for(int i=0;i<n;i++){
        freq[a[i]-mn]++;
        if(freq[a[i]-mn]>(n/2))
        return a[i];
    }
    return -1;
    
    }
};
