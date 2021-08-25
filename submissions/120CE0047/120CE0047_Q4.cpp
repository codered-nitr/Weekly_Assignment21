 int maxProduct(vector<int>& nums) {
        int ans=nums[0];
        int maxeh=nums[0];
        int mineh=nums[0];
        
        for (int i=1;i<nums.size();i++)
        {
            int temp=maxeh;
            maxeh=max({nums[i],maxeh*nums[i],mineh*nums[i]});
            mineh=min({nums[i],temp*nums[i],mineh*nums[i]});
            ans=max(ans,maxeh);
        }
        return ans;
    }
