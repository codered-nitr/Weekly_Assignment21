class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
     int a[n];
        a[0]=1;
        for(int i=1;i<n;i++){
            a[i]=a[i-1]*nums[i-1];
        }
        vector<int> b(n);
        int p=1;
        for(int j=(n-1);j>=0;j--){
           b[j]=p*a[j];
            p=p*nums[j];
        }
        return b;
    }
};
