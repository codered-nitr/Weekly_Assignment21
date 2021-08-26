#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<char> d;
    if (s[0] == ')' or s[0] == '}' or s[0] == ']')
    {
        cout << "FALSE";
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '[' or s[i] == '{' or s[i] == '(')
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
                    break;
                }
            }
            else if (s[i] == ']')
            {
                if (d.top() == '[')
                {
                    d.pop();
                }
                else
                {
                    break;
                }
            }
            else if (s[i] == '}')
            {
                if (d.top() == '{')
                {
                    d.pop();
                }
                else
                {
                    break;
                }
            }
        }
        if (d.size() == 0)
        {
            cout << "TRUE";
        }
        else
        {
            cout << "FALSE";
        }
    }

    return 0;
}
