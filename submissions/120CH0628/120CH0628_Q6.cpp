class Solution {
public:
    void nextPermutation(vector<int>& nums) {
     int idx = -1;
    int n = nums.size();
    for (int i = n - 1; i > 0; i--)
    {
        if (nums[i] > nums[i - 1])
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
    {
        reverse(nums.begin(), nums.end());
    }
    else
    {
        int temp = idx;
        for (int i = idx + 1; i < n; i++)
        {
            if (nums[i] <= nums[temp] and nums[i] > nums[idx - 1])
            {
                temp = i;
            }
        }
        swap(nums[temp], nums[idx-1]);
        reverse(nums.begin() + idx, nums.end());
    }   
    }
};
