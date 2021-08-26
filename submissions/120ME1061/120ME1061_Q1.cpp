#include <iostream>
#include <string>
#include <stack>
using namespace std;

//convert number characters to integers
int numbersFromAscii(char c)
{
    int convert = c - 48;
    return convert;
}

//note: only int division is considered (no floats)
//i.e. 5/2 = 2 and NOT 2.5
int evaluatePostfix(string s)
{
    stack<int> t;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            int one = t.top();
            t.pop();
            int two = t.top();
            t.pop();
            switch (s[i])
            {
            case '+':
                t.push(one + two);
                break;
            case '-':
                t.push(one - two);
                break;
            case '*':
                t.push(one * two);
                break;
            case '/':
                t.push(one / two);
                break;
            }
        }
        else
        {
            t.push(numbersFromAscii(s[i]));
        }
    }
    return t.top();
}

int main()
{
    string s = "93+2*";
    // cin >> s;
    cout << evaluatePostfix(s);
    return 0;
}
