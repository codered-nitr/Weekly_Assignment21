class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int arr[nums.size()] , prod=1; 
        vector<int> p;
        vector<int> :: iterator it;
        int i=nums.size()-1;
        for(it=nums.end()-1;it>=nums.begin();it--)
        {
            prod=prod*(*it);
            arr[i]=prod;
            i--;
        } 
    
        it=nums.begin();
        prod=*(it);
        it++;
        p.push_back(arr[1]);
        for(int i=1;i<nums.size()-1;i++)
        {
            p.push_back(prod*arr[i+1]);
            prod=prod*(*it);
            it++;
        }
        p.push_back(prod);
        for(auto ita:p)
            cout<<ita<<"\t";
        return p;
    }
};
