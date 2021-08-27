//subarray with 0 sum
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        unordered_map<int,int> m;
        m[0]=1;
        int sum=0;
        for (int i=0;i<n;i++){
            sum+=arr[i];
            arr[i]=sum;
            if (m.count(arr[i]))
                return true;
            else
                m[arr[i]]=1;
        }
        return false;
    }
};
