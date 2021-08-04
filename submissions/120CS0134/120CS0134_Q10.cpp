#include <bits/stdc++.h>
using namespace std;
//Author
//Abhas

class Solution
{
public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {

        stack<char> st;

        for (int i = 0; i < x.length(); i++)
        {
            if (st.empty())
                st.push(x[i]);
            else if (x[i] == '}' && st.top() == '{')
            {

                st.pop();
            }
            else if (x[i] == ']' && st.top() == '[')
            {

                st.pop();
            }
            else if (x[i] == ')' && st.top() == '(')
            {

                st.pop();
            }
            else
                st.push(x[i]);
        }

        if (st.empty())
            return true;
        return false;
         // Your code here
    }
};

int main()
{

    return 0;
}
