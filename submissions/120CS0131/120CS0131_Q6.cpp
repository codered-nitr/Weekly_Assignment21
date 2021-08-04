//Binery Search platform
int solve(vector<int>& nums) {
    vector <int> v1=nums,v2=nums;
    int sum1=0,sum2=0,size=nums.size();
    sort(v1.begin(),v1.end());
    sort(v2.rbegin(),v2.rend());

    for(int i=0; i<size;i++){
        sum1+=abs(v1[i]-nums[i]);
        sum2+=abs(v2[i]-nums[i]);
    }
    return min(sum1,sum2);
}
