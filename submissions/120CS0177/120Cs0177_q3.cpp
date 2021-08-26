#include <iostream>
using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;
    cout << endl;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
    int row_start = 0, row_end = m - 1, col_start = 0, col_end = n - 1;

    while (row_start <= row_end && col_start <= col_end)
    {
        for (int i = col_start; i <= col_end; i++)
        {
            cout << arr[i][row_start] << " ";
        }
        for (int i = row_start + 1; i <= row_end; i++)
        {
            cout << arr[col_end][i] << " ";
        }
        for (int i = col_end - 1; i >= col_start; i--)
        {
            cout << arr[i][row_end] << " ";
        }
        for (int i = row_end - 1; i > row_start; i--)
        {
            cout << arr[col_start][i] << " ";
        }
        cout << endl;
        row_start += 1;
        row_end -= 1;
        col_start += 1;
        col_end -= 1;
    }

    return 0;
}