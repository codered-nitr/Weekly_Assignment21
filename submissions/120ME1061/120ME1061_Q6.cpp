#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> nextPermutation(vector<int> v, int length)
{
    int swapOne, swapTwo;
    for (int i = length - 1; i >= 0; i--)
        if (v[i] < v[i + 1])
        {
            swapOne = i;
            break;
        }
    for (int i = length - 1; i >= 0; i--)
        if (v[i] > v[swapOne])
        {
            swapTwo = i;
            break;
        }
    
    vector<int>::iterator itr = v.begin();
    while(*itr != v[swapOne])
        itr++;
    itr++;
    
    int temp = v[swapOne];
    v[swapOne] = v[swapTwo];
    v[swapTwo] = temp;
    
    sort(itr, v.end());

    return v;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    // vector<int> copy = v;  //for comparison
    v = nextPermutation(v, n);
    for (int x : v)
        cout << x << " ";
    cout << endl;
    // next_permutation(copy.begin(), copy.end());
    // for (int x : copy)
    //     cout << x << " ";
    return 0;
}