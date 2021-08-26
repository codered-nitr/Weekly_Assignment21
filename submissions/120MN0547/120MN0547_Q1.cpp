//Kadane's Algorithm
#include <bits/stdc++.h>
using namespace std;
int kadanes(int arr[],int length) {
   int highest = 0;
   int currenthighest = 0;
   for(int i = 0; i < length; i++){
      currenthighest =max(arr[i],currenthighest + arr[i]) ;
      highest = max(highest,currenthighest);
   }
   return highest;
}
int main() {
   //Enter the array length
   int l;
   cin >> l;
   int arr[l];
   //Enter the elements of array 
   for (int i = 0; i < l; i++) {
      cin >> arr[i];
   }
   cout << "The Maximum Sum is: "<<kadanes(arr,l) << endl;
   return 0;
}
