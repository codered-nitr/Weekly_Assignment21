#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

bool compare(tuple<int,int,int> a, tuple<int,int,int> b)
{
    return (get<1>(a) < get<1>(b));
}

int main()
{
    vector<tuple<int, int, int>> v;
    int n;
    cin >> n;
    for (int i = 0; i < n ; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        tuple<int,int,int> p = make_tuple(a, b, c);
        v.push_back(p);
    }

    sort(v.begin(), v.end(), compare);

    int profit = 0, tempMoney = 0;
    for (int i = 0; i < n; i++)
    {
        tempMoney = get<2>(v[i]);
        if (get<1>(v[i]) == get<1>(v[i+1]))
        {
            if (tempMoney < get<2>(v[i+1]))
            {
                tempMoney = get<2>(v[i+1]);
            }
        }
        else
        {
            profit += tempMoney;
        }
    }
    cout << profit;
    return 0;
}