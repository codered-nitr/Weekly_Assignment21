#include <iostream>
#include <vector>
#include <stack>
#include <map>
using namespace std;

map<int, int> nextBiggest;

void fillMap(vector<int> v)
{
    vector<int>::iterator it = v.begin();
    stack<int> s;
    s.push(v[0]);
    while (it != v.end())
    {
        ++it;
        if (*it > s.top())
        {
            while (!s.empty() && s.top() < *it)
            {
                nextBiggest.insert({s.top(), *it});
                s.pop();
            }
        }
        s.push(*it);
    }
    while (!s.empty())
    {
        nextBiggest.insert({s.top(), -1});
        s.pop();
    }
}

int main()
{
    vector<int> v = {6, 8, 0, 1, 3};
    fillMap(v);
    for (int x : v)
        cout << nextBiggest[x] << " ";
    return 0;
}