#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> prices)
{
    int low = 0, high = 1;
    for (int i = 0; i < prices.size() - 1; i++)
    {
        if (prices[i] > prices[i + 1] && prices[i + 1] < prices[low])
            low = i + 1;
        else if (prices[i] < prices[i + 1] && prices[i + 1] > prices[high])
            high = i + 1;
    }
    if (low >= high)
        return 0;
    return (prices[high] - prices[low]);
}

int main()
{
    // vector<int> prices = {7, 6, 4, 3, 1};
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices);
    return 0;
}