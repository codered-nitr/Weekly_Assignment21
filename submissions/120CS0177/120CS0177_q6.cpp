
int solve(vector<int> &nums)
{
    vector<int> ascen = nums;
    sort(ascen.begin(), ascen.end());
    int a, b;
    for (int i = 0; i < nums.size(); i++)
    {
        a = a + abs(nums[i] - ascen[i]);
    }

    vector<int> descen = nums;
    sort(descen.begin(), descen.end(), greater<int>());
    for (int i = 0; i < nums.size(); i++)
    {
        b = b + abs(nums[i] - descen[i]);
    }

    if (a < b)
        return a;
    else
        return b;
}