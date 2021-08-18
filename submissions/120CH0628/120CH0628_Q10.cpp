class Solution {
public:
    int search(vector<int> &nums, int k)
{
    int pos;
    auto it = find(nums.begin(), nums.end(), k);
    if (it != nums.end())
    {
        pos = it - nums.begin();
    }
    else
    {
        pos = -1;
    }
    return pos;
}
};
