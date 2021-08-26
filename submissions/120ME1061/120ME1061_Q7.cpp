#include <iostream>
#include <string.h>
using namespace std;

typedef struct palindrome
{
    string data;
    int length;
} palindrome;

palindrome solve(string str)
{
    int maxLength = 1;

    int start = 0, len = str.length();
    int low, high;

    for (int i = 1; i < len; i++)
    {
        //even length
        low = i - 1;
        high = i;
        while (low >= 0 && high < len && str[low] == str[high])
        {
            --low;
            ++high;
        }
        ++low;
        --high;
        if (high - low + 1 > maxLength && str[low] == str[high])
        {
            start = low;
            maxLength = high - low + 1;
        }

        //odd length: one center
        low = i - 1;
        high = i + 1;
        while (low >= 0 && high < len && str[low] == str[high])
        {
            --low;
            ++high;
        }
        ++low;
        --high;
        if (str[low] == str[high] && high - low + 1 > maxLength)
        {
            start = low;
            maxLength = high - low + 1;
        }
    }
    cout << maxLength << " " << str.substr(start, maxLength) << endl;
    palindrome answer;
    answer.data = str.substr(start, maxLength);
    answer.length = maxLength;
    return answer;
}

int main()
{
    string s;
    cin >> s;
    palindrome obj = solve(s);
    cout << obj.data << " " << obj.data << endl;
    return 0;
}