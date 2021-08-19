#include <iostream>
#include <vector>
using namespace std;

//brute force solution - O(nk) time complexity
int sumMinMaxSubarray(vector<int> v, int k)
{
    int sum = 0;
    for (int i = 0; i < v.size() - k + 1; i++)
    {
        int min = v[i], max = v[i];
        for (int j = i + 1; j < i + 4; j++)
        {
            if (v[j] < min) 
                min = v[j];
            if (v[j] > max)
                max = v[j];
        }
        sum += (min + max);
    }
    return sum;
}

int main()
{
    vector<int> v = {2, 5, -1, 7, -3, -1, -2};  
    int k = 4;
    cout << sumMinMaxSubarray(v, k);
    return 0;
}