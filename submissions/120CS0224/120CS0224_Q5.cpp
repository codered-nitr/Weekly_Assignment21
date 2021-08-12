class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size(),p=1,c=0;
        vector<int> v;
        for(int i=0 ; i<n ; i++)
        {
            if(nums[i]!=0 || c>=1)
              p*=nums[i];
            else
              c++;
        }
        for(int i=0 ; i<n ; i++){
            if(c<1)
            v.push_back(p/nums[i]);
            else if(c==1 && nums[i]==0)
            v.push_back(p);
            else
            v.push_back(0);    
        } 
        return v;
    }
};
