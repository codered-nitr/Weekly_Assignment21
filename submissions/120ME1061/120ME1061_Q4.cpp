#include <iostream>
#include <string>
#include <string.h>
using namespace std;

bool isRot(string s1, string s2)
{
    if (s1.length() != s2.length()) return false;
    string test = s1 + s1;
    if (test.find(s2) == string::npos) return false;
    return true;
}

int main()
{
    //INPUT
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    // bool isRotation;
    // if (s1.length() != s2.length()) isRotation = false;
    // s1 = s1 + s1;
    // if (s1.find(s2) != string::npos) 

    //OUTPUT
    if (isRot(s1, s2)) cout << "Is Rotation\n";
    else cout << "Is Not Rotation\n";

    return 0;
}