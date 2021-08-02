#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<char> d;
    d.push(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            d.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (d.top() == '(')
            {
                d.pop();
            }
            else
            {
                d.push(s[i]);
            }
        }
    }
    int x = (d.size());
    cout << x;

    return 0;
}
