#include<bits/stdc++.h>

using namespace std;

int main(){
	int num, temp, ans=0;
	cin>>num;
	temp=num;
	int i=0;
	while(temp!=0){
		if(temp&1)
			ans+=(num<<i);
		i++;
		temp=num>>i;
	}
	cout<<ans;

}
