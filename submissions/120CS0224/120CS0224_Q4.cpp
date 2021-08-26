//String Rotation
#include <bits/stdc++.h>
using namespace std;


bool rotation(string a,string b){
  if(a.length()!=b.length())
  return false;
  queue<char> p1;
  queue<char> p2;
  int k=a.length();
  for(int i=0 ; i<a.length() ; i++){
    p1.push(a[i]);
    p2.push(b[i]);
  }
  while(k--){
    if(p1==p2)
    return true;
    else{
      int m=p2.front();
      p2.pop();
      p2.push(m);
    }
  }
  return false;
}


int main(){
  string a,b;
  cin>>a>>b;
  if(rotation(a,b))
  cout<<" YES IT IS THE ROTATION OF THE STRING";
  else 
  cout<<" NO IT IS NOT THE ROTATION OF THE STRING";
  return 0;
}
