#include<bits/stdc++.h>
using namespace std;
//Author 
//Abhas 

//bool comparator(int a,int b)
//{
//    return a>b;
//}


int solve(vector<int>& nums) {
    vector<int>c=nums;
    vector<int>d=nums;
    sort(c.begin(),c.end());
    int a,b;
    for(int i=0;i<nums.size();i++)
    {
        a=a+abs(nums[i]-c[i]);
    }
    sort(d.begin(),d.end(),greater<int>());
    for(int i=0;i<nums.size();i++)
    {
        b=b+abs(nums[i]-d[i]);
    }

    return min(a,b);



}

int main(){

return 0;
}
