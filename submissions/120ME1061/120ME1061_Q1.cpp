#include <iostream>
#include <vector>
using namespace std;

// 1 <= N <= 10^5   (^ = power)
// 1 <= K <= 10^8
// 1 <= Arr[i] <= 10^6

int main()
{
    //Input
    int n, k;
    cin >> n >> k;
    vector<int> input(n);
    for (int i = 0; i < n; i++)
        cin >> input[i];

    /* LOGIC */
    pair<int, bool> initial_pair = make_pair(0, false);
    vector<pair<int, bool>> countOccurences(100001, initial_pair);

    //filling comp
    for (int i = 0; i < n; i++)
    {
        if (input[i] > k)
            countOccurences[input[i]].first--;
        else
            countOccurences[input[i]].first++;
    }

    //pair logic
    int pairs = 0;
    for (int i = 0; i < n; i++)
    {
        if (countOccurences[input[i]].second == true || k - input[i] < 0)
            continue;
        else
        {
            // cout << comp[input[i]].first << endl;
            if (k - input[i] == input[i])
            {
    	        if (countOccurences[input[i]].first >= 2)
                { //no of occurences(n) C 2 = (n!)/(n - 2)!2! = n(n-1)/2
                    pairs += (countOccurences[input[i]].first) * (countOccurences[input[i]].first - 1) / 2;
                    countOccurences[k - input[i]].second = true;
                }
            }
            else if (countOccurences[k - input[i]].first > 0)
            {
                pairs += (countOccurences[input[i]].first * countOccurences[k - input[i]].first);
                countOccurences[k - input[i]].second = true;
                countOccurences[input[i]].second = true;
            }
            else
                continue;
        }
    }

    //Output
    cout << pairs;

    return 0;
}
