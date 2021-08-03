#include <bits/stdc++.h>
using namespace std;
//Author
//Abhas

vector<int> solve(vector<int> &a, vector<int> &b)
{
    vector<int> c;
    int i = 0, j = 0;
    while (i != a.size() && j != b.size())
    {
        if (a[i] >= b[j])
        {
            c.push_back(b[j]);
            j++;
        }
        else
        {
            c.push_back(a[i]);
            i++;
        }
    }
    if (i == a.size())
    {
        for (j; j < b.size(); j++)
        {
            c.push_back(b[j]);
        }
    }
    else if (j == b.size())
    {
        for (i; i < a.size(); i++)
        {
            c.push_back(a[i]);
        }
    }
    return c;
}

int main()
{

    return 0;
}
