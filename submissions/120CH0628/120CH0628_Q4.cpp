class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
    int max_overall = nums[0];
    int max_ending = nums[0];
    int min_ending = nums[0];
    for (int i = 1; i < n; i++)
    {
        int temp = max_ending;
        max_ending = max({nums[i], max_ending * nums[i], min_ending * nums[i]});
        min_ending= min({nums[i], temp * nums[i], min_ending * nums[i]});
        max_overall = max(max_overall , max_ending);
        
    }

    return max_overall;
    }
};
