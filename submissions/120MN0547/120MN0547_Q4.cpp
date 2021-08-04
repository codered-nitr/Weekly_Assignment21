// String rotation
#include<iostream>
using namespace std;
bool Rotation(string str1, string str2){
   if(str1.length() != str2.length())
      return false;
   string con_str = str1 + str1;
   if(con_str.find(str2) != string::npos){
      return true;
   } else {
      return false;
   }
}
main() {
   string str1, str2;
   cout << "Enter two strings: ";
   cin >> str1 >> str2;
   if(Rotation(str1, str2)){
      cout << "Two strings are rotation of each other";
   } else {
      cout << "Two strings are not rotation of each other";
   }
}
