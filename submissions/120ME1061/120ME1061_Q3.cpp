#include <iostream>
#include <vector>
using namespace std;

void spiralTraversal(vector<vector<int>> v, int r, int c)
{
    int row_end = c - 1, col_end = r - 1, row_start = 0, col_start = 0;
    while(row_end > 0 && col_end > 0)
    {
        for (int i = row_start; i <= row_end; i++)
        {
            cout << v[col_start][i] << " "; 
        }
        for (int i = col_start + 1; i <= col_end; i++)
        {
            cout << v[i][row_end] << " ";
        }
        for (int i = row_end - 1; i >= row_start; i--)
        {
            cout << v[col_end][i] << " ";
        }
        for (int i = col_end - 1; i > col_start; i--)
        {
            cout << v[i][row_start] << " ";
        }
        row_start++;
        col_start++;
        row_end--;
        col_end--;
    }
}

int main()
{
    //INPUT
    int r, c;
    cin >> r >> c;
    vector<vector<int>> v(r, vector<int>(c));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> v[i][j];
        }
    }

    spiralTraversal(v, r, c);
   
    return 0;
}