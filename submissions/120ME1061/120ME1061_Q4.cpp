#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //Initialisation
    //given n <= 30
    vector<int> fibonacci(31, 0);
    fibonacci[1] = 1;
    for (int i = 2; i < 31; i++)
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

    //I/O
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << fibonacci[n] << endl;
    }

    return 0;
}