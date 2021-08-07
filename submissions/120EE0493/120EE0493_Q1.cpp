// Count pairs with given sum - https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1

int getPairsCount(int arr[], int n, int k)
{
    unordered_map<int, int> m;
    int ans = 0;
    for (int i = 0; i < n; i++) m[arr[i]]++;

    for (auto item : m)
    {
        if (m.find(k - item.first) != m.end())
        {
            if (item.first == k - item.first)
            {
                ans += (item.second * (item.second - 1));
                continue;
            }

            ans += (item.second * m[k - item.first]);
        }
    }

    return ans / 2;
}
