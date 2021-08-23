#include <iostream>
#include <set>
using namespace std;

bool checkZeroSumSubarray(int *arr, int n)
{
    set<int> sums;
    int temp_sum = 0;
    for (int i = 0; i < n; i++)
    {
        temp_sum += arr[i];
        if (sums.find(temp_sum) != sums.end())
            return true;
        sums.insert(temp_sum);
    }
    return false;
}

int main()
{
    int arr[] = {7, 12, 6, -3, 2, -8, 3, 10, 9};   //Yes
    // int arr[] = {7, 12, 6, -3, 2, 3, 10, 9};    //No
    int n = sizeof(arr) / sizeof(int);
    if (checkZeroSumSubarray(arr, n)) 
        cout << "Yes";
    else    
        cout << "No";
    return 0;
}