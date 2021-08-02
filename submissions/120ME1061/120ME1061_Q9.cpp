#include <iostream>
#include <string>
#include <stack>
using namespace std;

int countBalanced(string e)
{
    stack<char> open, close, test;
    for (int i = 0; i < e.length(); i++)
    {
        if (test.empty() == true && (e[i] == ')' || e[i] == '}' || e[i] == ']'))
            continue;
        else if (e[i] == '(' || e[i] == '{' || e[i] == '[')
            test.push(e[i]);
        else if ((e[i] == ')' && test.top() == '(') || (e[i] == '}' && test.top() == '{') || (e[i] == ']' && test.top() == '['))
        {
            open.push(test.top());
            close.push(e[i]);
            test.pop();
        }
    }
    return (open.size() + close.size());
}

int totalParentheses(string e)  //working
{
    int total = 0;
    for (int i = 0; i < e.length(); i++)
    {
        if (e[i] == '(' || e[i] == '{' || e[i] == '[' || e[i] == ')' || e[i] == '}' || e[i] == ']') 
            total++;
    }
    return total;
}

int main()
{
    //INPUT
    string expression;
    getline(cin, expression);

    //OUTPUT
    int total = totalParentheses(expression), balanced = countBalanced(expression); 
    cout << total - balanced << endl;
    return 0;
}