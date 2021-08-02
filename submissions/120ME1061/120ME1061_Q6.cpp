#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    //INPUT
    int n;
    cin >> n;
    vector<int> input(n), ascending(n), descending(n);
    for (int i = 0; i < n; i++) cin >> input[i];

    //LOGIC
    ascending = input;
    descending = input;
    sort(ascending.begin(), ascending.end());
    sort(descending.begin(), descending.end(), cmp);

    int ascendingCost = 0, descendingCost = 0;
    for (int i = 0; i < n; i++)
    {
        ascending[i] = abs(ascending[i] - input[i]);
        ascendingCost += ascending[i];

        descending[i] = abs(descending[i] - input[i]);
        descendingCost += descending[i];
    }

    //OUTPUT
    if (ascendingCost < descendingCost) cout << ascendingCost;
    else cout << descendingCost;
    return 0;
}