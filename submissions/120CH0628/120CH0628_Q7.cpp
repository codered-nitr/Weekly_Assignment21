class Solution {
  public:
    string longestPalin (string str) {
        int start = 0, low, high, end = 1;
    int len = str.length();
    for (int i = 1; i < len; i++)
    {

        // even
        low = i - 1;
        high = i;
        while (low >= 0 and high < len and str[low] == str[high])
        {
            if (high - low + 1 > end)
            {
                start = low;
                end = high - low + 1;
            }
            low--;
            high++;
        }
        // odd
        low = i - 1;
        high = i + 1;
        while (low >= 0 and high < len and str[low] == str[high])
        {
            if (high - low + 1 > end)
            {
                start = low;
                end = high - low + 1;
            }
            low--;
            high++;
        }
    }
    string ans = str.substr(start, end);
    return ans;
    }
};
