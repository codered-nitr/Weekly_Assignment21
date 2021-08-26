  
//min cost array
int solve(vector<int>& nums) {
    vector <int> v;
    for(int i=0;i<nums.size();i++)
    {
        v.push_back(nums[i]);
    }
    sort(v.begin(),v.end());
    int d1=0,d2=0;
    for(int i=0;i<v.size();i++)
    {
        d1=d1+abs(nums[i]-v[i]);  
    }
    for(int i=0;i<v.size();i++)
    {
        d2=d2+abs(nums[i]-v[v.size()-1-i]);  
    }
    if(d1>d2)
    return d2;
    else
    return d1;
}
