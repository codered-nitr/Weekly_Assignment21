#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:

    int searchBin(vector<int>& num, int start, int end , int target){
        if(start>end)return -1;
        int mid = ((end-start)/2)+start;
        if(num[mid]==target)return mid;

        if(num[mid]>=num[start]){
            if(target>=num[start]&&target<=num[mid] )return searchBin(num,start,mid-1,target);

        return searchBin(num,mid+1,end,target);}

        if(num[end]>num[mid]){
            if(target>=num[mid]&&target<=num[end] )return searchBin(num,mid+1,end,target);

        return searchBin(num,start,mid-1,target);}
    }
     int searchi(vector<int>& nums, int target) {

        int l = nums.size()-1;

        return searchBin(nums,0,l,target);

    }
};
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a;
    vector<int> nums;
    for(int i =0;i<n;i++){
        cin>>a;
        nums.push_back(a);
    }
    int target;
    cin>>target;

    Solution ob ;
    int ans = ob.searchi(nums,target);
    cout<<ans<<endl;
}
}
