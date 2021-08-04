// Spiral traverse
#include <bits/stdc++.h>
using namespace std;
int main()
 {
	
	int t;
	cin>>t;
	while(t--)
	{
	     int m,n;
	     cin>>m>>n;
	     int a[m][n];
	     for(int i=0;i<m;i++)
	     {
	         for(int j=0;j<n;j++)
	         {cin>>a[i][j];}
	     }
	     int count1=0,count2=n-1,count3=0,count4=m-1,i,j;
	     while(count1<=count2 && count3<=count4)
          {
	         for(j=count1;j<=count2;j++)
	         {cout<<a[count3][j]<<" ";}
	         count3++;
	         for(i=count3;i<=count4;i++)
	         {cout<<a[i][count2]<<" ";}
	         count2--;
	         if(count3<=count4)
	         {for(j=count2;j>=count1;j--)
	         {cout<<a[count4][j]<<" ";}}
	         count4--;
	         if(count1<=count2)
	         {for(i=count4;i>=count3;i--)
	         {cout<<a[i][count1]<<" ";}}
              count1++;
	     }
	     cout<<endl;
	}
	return 0;
}
