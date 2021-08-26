class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int ans = 1;
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                ans = ans * nums[i];
            }
            else
            {
                count++;
            }
        }
        if (count == nums.size())
        {
            for (int i = 0; i < nums.size(); i++)
            {
                nums[i] = 0;
            }
            return nums;
        }

        if (count > 0)
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] != 0)
                {
                    nums[i] = 0;
                }

                else if (nums[i] == 0)
                {
                    
                    if (count > 1)
                    {
                        nums[i] = 0;
                    }
                    else
                    {
                        nums[i] = ans;
                    }
                }
            }
        }
        else
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] != 0)
                {
                    nums[i] = ans / nums[i];
                }
            }
        }
        return nums;
    }
};
