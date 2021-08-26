class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        unordered_map<int , int> m;
        int sum=0;
        bool ans=true;
        for(int i=0 ; i<n ; i++){
            sum+=arr[i];
            m[sum]++;
            if(m[sum]==2 || sum==0)
            return ans;
        }
        return false;
    }
};
