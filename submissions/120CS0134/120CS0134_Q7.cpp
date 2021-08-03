#include<bits/stdc++.h>
using namespace std;
//Author 
//Abhas 

class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.

    int maxMeetings(int start[], int end[], int n)
    {
       vector< pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            v.push_back(make_pair(start[i],end[i]));
        }
        sort(v.begin(),v.end(),[](auto a,auto b)->bool{return a.second < b.second;});
        int endmax=v[0].second;
        int count=1;
        for(int i=1;i<v.size();i++)
        {
            if(v[i].first>endmax)
            {
                count++;
                endmax=v[i].second;
            }
        }
        return count;

        // Your code here
    }
};


int main(){

return 0;
}
