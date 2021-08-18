class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        int ans=0;
   unordered_map<int,int> m;
   for(int i=0;i<n;i++){
       m[arr[i]]++;
   }
   for(int i=0;i<n;i++){
         if (arr[i] == k - arr[i])
        {
            ans += (m[arr[i]] - 1);
        }
     else  if(m[k-arr[i]]){
           ans=ans+m[k-arr[i]];
       }
       
   }
    return ans/2;
    }
};
