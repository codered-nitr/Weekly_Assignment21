// To find error in the following code where we want to print the first and last element in the given vector : 
#include <iostream>
#include <vector>
using namespace std;

signed main()
{
   vector<int> num;
   num.push_back(1);
   num.push_back(2);
   num.push_back(3);
   num.push_back(4);
   
   cout << *num.begin() << "\n" ;
   cout << *num.end();

    return 0;
}
