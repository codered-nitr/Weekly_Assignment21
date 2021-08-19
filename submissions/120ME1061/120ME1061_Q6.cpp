#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool stringCompare(string s, string t)
{
    stack<char> s_stack, t_stack;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '#')
        {
            if (s_stack.empty() == true)
                continue;
            else
                s_stack.pop();
        }
        else
        {
            s_stack.push(s[i]);
        }
    }
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == '#')
        {
            if (t_stack.empty() == true)
                continue;
            else
                t_stack.pop();
        }
        else
        {
            t_stack.push(t[i]);
        }
    }

    while (s_stack.empty() == false && t_stack.empty() == false)
    {
        if (s_stack.top() == t_stack.top())
        {
            s_stack.pop();
            t_stack.pop();
        }
        else
            return false;
    }

    if (s_stack.empty() == true && t_stack.empty() == true)
        return true;

    return false;
}

int main()
{
    //Input
    string s, t;
    cin >> s >> t;

    if (stringCompare(s, t) == true)
        cout << "True";
    else
        cout << "False";
    return 0;
}