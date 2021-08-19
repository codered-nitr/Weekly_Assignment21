#include <iostream>
using namespace std;

//Print Array Snippet
template <typename T>
void printArray(T *arr, int size_of_array)
{
    for (int i = 0; i < size_of_array; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void solve(int *arr, int length)
{
    int start = 0, end = length - 1;
    while (start <= end)
    {
        if (arr[start] > 0 && arr[end] < 0)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
        else if (arr[start] > 0 && arr[end] > 0)
        {
            end--;
        }
        else if (arr[start] < 0 && arr[end] < 0)
        {
            start++;
        }
        else if (arr[start] < 0 && arr[end] > 0)
        {
            start++;
            end--;
        }
    }
}


int main()
{
    int arr[] = {-1, 2, -3, -4, 5, 6, -7, 8, 9};
    int length = sizeof(arr)/sizeof(int);
    solve(arr, length);
    printArray(arr, length);
    return 0;
}