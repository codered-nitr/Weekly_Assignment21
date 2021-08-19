#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> v, int target)
{
    int start = 0, end = v.size() - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (v[mid] == target)
            return mid;
        else if (v[mid] > v[start])
        {
            if (v[start] > target)
                start = mid + 1;
            else if (v[start] <= target)
                end = mid - 1;
        }
        else if (v[mid] < v[end])
        {
            if (v[end] > target)
                start = mid + 1;
            else if (v[end] <= target)
                end = mid - 1;
        }
        else if (start == end)
        {
            if (v[start] != target)
                break;
        }
    }
    return -1;
}

int main()
{
    vector<int> numbers = {4, 5, 6, 7, 0, 1, 2};
    // vector <int> numbers = {1};
    cout << search(numbers, 3);
    return 0;
}