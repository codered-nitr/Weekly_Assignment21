#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool checkParentheses(string e)
{
    if (e[0] == ')' || e[0] == '}' || e[0] == ']') return false;
    stack<char> s;
    for (int i = 0; i < e.length(); i++)
    {
        if (e[i] == '(' || e[i] == '{' || e[i] == '[')
            s.push(e[i]);
        else if ((e[i] == ')' && s.top() == '(') || (e[i] == '}' && s.top() == '{') || (e[i] == ']' && s.top() == '['))
            s.pop();
    }
    if (s.size() > 0) return false;
    return true;
}

int main()
{
    //INPUT
    string expression;
    getline(cin, expression);

    //OUTPUT
    if (checkParentheses(expression)) cout << "Balanced\n";
    else cout << "Not Balanced\n";
    return 0;
}