#include <iostream>
#include <vector>
using namespace std;

template <class T>
void printSimpleVector(vector<T> v)
{
    for (auto x : v)
        cout << x << " ";
    cout << endl;
}

vector<int> productExceptSelf(vector<int> v)
{
    vector<int> ans(v.size(), 1);
    int leftToRight = 1;
    for (int i = 0; i < v.size() - 1; i++)
    {
        leftToRight *= v[i];
        ans[i + 1] *= leftToRight;
    }
    int rightToLeft = 1;
    for (int i = v.size() - 1; i > 0; i--)
    {
        rightToLeft *= v[i];
        ans[i - 1] *= rightToLeft;
    }
    return ans;
}

int main()
{
    vector<int> input = {1, 2, 3, 4};
    vector<int> ans = productExceptSelf(input);
    printSimpleVector(ans);
    return 0;
}