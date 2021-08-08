class Solution 
{
public:
    int search(vector<int>& arr, int target) 
    {
    vector<int>v1;
    vector<int>v2;
    v1.push_back(arr[0]);
    int k=0;
    for(int i=1;i<arr.size();i++)
    {
        char m;
        if(arr[i]<arr[i-1])
            {
                m='A';
                k=i;
            }

        if(m=='A')    
            v2.push_back(arr[i]);//0,1,2
        else
            v1.push_back(arr[i]);//4,5,6,7       
    }

    if(binary_search(v1.begin(),v1.end(),target))
        return lower_bound(v1.begin(), v1.end(), target) - v1.begin();
    else if(binary_search(v2.begin(),v2.end(),target))
        return (lower_bound(v2.begin(), v2.end(), target) - v2.begin())+k;
    else
        return -1;
        
    }
};
