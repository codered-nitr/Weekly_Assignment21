#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.length() != s2.length())
    {
        cout << "NO";
    }

    queue<char> q;
    for (int i = 0; i < s2.length(); i++)
    {
        q.push(s2[i]);
    }
    queue<char> p;
    for (int i = 0; i < s1.length(); i++)
    {
        p.push(s1[i]);
    }
    int k = s1.length();
    while (k > 0)
    {
        if (p == q)
        {
            cout << "YES";
            break;
        }
        else
        {
            char c = q.front();
            q.pop();
            q.push(c);
        }

        k--;
    }
    if (k == 0)
    {
        cout << "NO";
    }

    return 0;
}
