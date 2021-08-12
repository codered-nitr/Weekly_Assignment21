#include <bits/stdc++.h>
using namespace std;

int output(int arr[], int n, int k)
{
    int sum = 0;

    deque<int> S(k), G(k);

    int i = 0;
    for (i = 0; i < k; i++)
    {

        while ((!S.empty()) and arr[S.back()] >= arr[i])
            S.pop_back();

        while ((!G.empty()) and arr[G.back()] <= arr[i])
            G.pop_back();

        G.push_back(i);
        S.push_back(i);
    }

    for (; i < n; i++)
    {
        sum += arr[S.front()] + arr[G.front()];
        while (!S.empty() && S.front() <= i - k)
            S.pop_front();
        while (!G.empty() && G.front() <= i - k)
            G.pop_front();

        while ((!S.empty()) && arr[S.back()] >= arr[i])
            S.pop_back();

        while ((!G.empty()) && arr[G.back()] <= arr[i])
            G.pop_back();

        G.push_back(i);
        S.push_back(i);
    }

    sum += arr[S.front()] + arr[G.front()];

    return sum;
}

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for (auto &i : arr)
    {
        cin >> i;
    }
    cout << output(arr, n, k);
    return 0;
}
