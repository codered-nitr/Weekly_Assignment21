//string rotation
#include <bits/stdc++.h>
using namespace std;
int main(){
  string s1,s2;
	cin>>s1>>s2;
	if (s1.length()!=s2.length()){	
		cout<< "Not a rotation\n";
		return 0;
	}

	int n=s1.length();
	for (int i=0;i<n;i++){
		if(s1[0]==s2[i]){
			int c=1;
			for (int j=i+1;j<n;j++){
				if (s1[c]==s2[j]){
					c++;
					continue;
				}
				else {
					cout <<"Not a rotation";
					return 0;
				}
			}
			int l=0;
			for (int k=c;k<n;k++){
				if(s1[k]==s2[l]){
					l++;
					continue;
				}
				else {
					cout <<"Not a Rotation";
					return 0;
				}
			}
		}
	}

	cout <<"Yes it is a rotation";

}
