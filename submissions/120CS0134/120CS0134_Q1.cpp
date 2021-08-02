#include <iostream>
#include <cmath>
using namespace std;
int maxSumSubArray(int a[], int n);
int main()
{
    int n;
    cout << "Enter the number of elements in the array" << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << maxSumSubArray(a, n);
}
int maxSumSubArray(int a[], int n)
{
    int sum = 0, max = INT32_MIN, i;
    for (i = 0; i < n; i++)
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
