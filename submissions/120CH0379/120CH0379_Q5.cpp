class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
         int p=1;
         int k=0;
         int n=nums.size();
         vector<int> pr;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
                k++;
            else
            p=p*nums[i];
        }
        for(int i=0;i<n;i++)
        {
            if(k==1 )
            {
                if(nums[i]==0)
                    pr.push_back(p);
                else
                    pr.push_back(0);
            }
            else if(k>1)
                pr.push_back(0);
            else
                pr.push_back(p/nums[i]);
        }
        return pr;
    }
};
