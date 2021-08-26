#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    //INPUT
    int n , m, a[100000], b[100000];
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    //LOGIC
    set<int> s(a, a+n);
    for (int i = 0; i < m; i++) s.insert(b[i]);

    //OUTPUT
    //cout << "Size of the union set is: ";
    cout << s.size() ;  

    /*For Printing the union set
    cout << "\nUnion of the sets is: \n";
    for (int x : s) cout << x << " "; 
    */

    return 0;
}
