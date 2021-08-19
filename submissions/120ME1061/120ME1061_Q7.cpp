#include <iostream>
#include <vector>
using namespace std;

int findCelebIndex(vector<vector<int>> m, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (m[i][n] == 0)
        {
            int col_sum = 0;
            for (int k = 0; k < n; k++)
            {
                col_sum += m[k][i];
            }
            if (col_sum == n - 1)
                return i;
        }
    }
    return -1;
}

int main()
{
    //Input
    int n;
    cin >> n;
    vector<vector<int>> m(n, vector<int>(n + 1));
    for (int i = 0; i < n; i++)
    {
        int row_sum = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> m[i][j];
            row_sum += m[i][j];
        }
        m[i][n] = row_sum;
    }

    //Output
    cout << findCelebIndex(m, n);
    
    return 0;
}