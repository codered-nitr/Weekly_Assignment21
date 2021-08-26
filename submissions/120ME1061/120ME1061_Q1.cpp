#include <iostream>
#include <vector>
using namespace std;

int kadaneAlgo(vector <int> v, int size_of_vector)
{
    int max_end = 0, max_found = 0;
    for (int i = 0; i < size_of_vector; i++)
    {
        max_end += v[i];
        if (max_end > max_found) max_found = max_end;
        if (max_end < 0) max_end = 0;
    }
    return max_found;
}


int main()
{
    //INPUT
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int var;
        cin >> var;
        v.push_back(var);
    }

    //OUTPUT
    //for {-2, -3, 4, -1, -2, 1, 5, -3}
    cout << kadaneAlgo(v, n);
    return 0;
}
