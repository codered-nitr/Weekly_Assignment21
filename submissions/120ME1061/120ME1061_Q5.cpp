#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector<int> v, int element)
{
    int start = 0, end = v.size() - 1;
    while (start <= end)
    {
        int mid = start - ((start - end) / 2);
        if (v[mid] == element)
            return true;
        else if (v[mid] < element)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return false;
}

vector<int> getCommons(vector<int> A, vector<int> B, vector<int> C)
{
    vector<int> commons;
    for (int i = 0; i < A.size(); i++)
        if (binarySearch(B, A[i]) && binarySearch(C, A[i]))
            commons.push_back(A[i]);
    if (!commons.size())
        commons.push_back(-1);
    return commons;        
}

int main()
{
    vector<int> A = {1, 5, 10, 20, 40, 80};
    vector<int> B = {6, 7, 20, 80, 100};
    vector<int> C = {3, 4, 15, 20, 30, 70, 80, 120};

    //test values
    // cout << binarySearch(A, 5) << endl;
    // cout << binarySearch(A, 25) << endl;
    // cout << binarySearch(B, 20) << endl;
    // cout << binarySearch(C, 70) << endl;

    vector<int> answer = getCommons(A, B, C);
    for (int x : answer)
        cout << x << " "; 

    return 0;
}