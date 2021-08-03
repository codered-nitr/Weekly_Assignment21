#include <iostream>
#include <cmath>
using namespace std;

int maxSum(int a[], int n)
{
    int sum = 0, max = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
        if (sum>max)
        {
            max=sum;
        }
        if (sum<0)
        sum=0;
    }
    return max;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << maxSum(a, n);
}
