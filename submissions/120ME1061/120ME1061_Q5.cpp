#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //INPUT
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    
    //LOGIC
    vector<int> mix;
    vector<int>::iterator ita = a.begin();
    vector<int>::iterator itb = b.begin();
    
    while(ita != a.end() && itb != b.end())
    {
        if (*ita > *itb)
        {
            int dat = *itb;
            mix.push_back(dat);
            itb++;
        }
        else
        {
            int dat = *ita;
            mix.push_back(dat);
            ita++;
        }
    }
    if (ita == a.end())
    {
        while(itb != b.end())
        {
            int dat = *itb;
            mix.push_back(dat);
            itb++;
        }
    }
    else
    {
        while(ita != a.end())
        {
            int dat = *ita;
            mix.push_back(dat);
            ita++;
        }
    }

    //OUTPUT
    for (auto x : mix) cout << x << " ";
    return 0;
}