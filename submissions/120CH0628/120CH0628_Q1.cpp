class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map<int, int> m;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
        m[arr[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
        count += m[k - arr[i]];

        if (k == 2* arr[i])
        {
            count--;
        }
        }
        return count / 2;
        }
};
