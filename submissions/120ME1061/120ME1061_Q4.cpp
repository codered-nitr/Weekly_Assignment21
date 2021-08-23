#include <iostream>
using namespace std;

int maxSubarrayProduct(int arr[], int n)
{
    int max_ending_here = 1, min_ending_here = 1; //starting at 1, because products

    // Initialize overall max product
    int max_so_far = 0;
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            //maximum will be directly updated
            //minimum will have a min() check
            max_ending_here = max_ending_here * arr[i];
            min_ending_here = min(min_ending_here * arr[i], 1);
            flag = 1;
        }
        else if (arr[i] == 0)
        {
            //both maintain values
            max_ending_here = 1;
            min_ending_here = 1;
        }
        else
        {
            //maximum, if positive, becomes a smaller negative
            //minimum, if negative will give a bigger positive here
            int temp = max_ending_here;
            max_ending_here = max(min_ending_here * arr[i], 1);
            min_ending_here = temp * arr[i];
        }

        //update max_so_far
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    if (!flag && max_so_far == 0)
        return 0;
    return max_so_far;
}

int main()
{
    int arr[] = {6, -3, -10, 0, 2};
    int n = 5;
    cout << maxSubarrayProduct(arr, n);
    return 0;
}