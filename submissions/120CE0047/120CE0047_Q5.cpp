 vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        int lp=1;
        for(int i=0;i<nums.size();i++)
        {
          lp=lp*nums[i];
            ans.push_back(lp);
        }
        int rp=1;
        for(int i=ans.size()-1;i>0;i--)
        {
            ans[i]=ans[i-1]*rp;
            rp=rp*nums[i];
        }
        ans[0]=rp;
        return ans;
    }
