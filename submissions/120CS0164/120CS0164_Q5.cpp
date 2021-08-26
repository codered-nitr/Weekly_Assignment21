class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        vector<int> arr;
        int temp = 1;
        int c= 0;
        for(int i =0;i<nums.size();i++){
            arr.push_back(temp);
            temp = temp*nums.at(i);
             
            }
        temp = 1;
        for(int i = nums.size()-1 ;i>=0;i--){
            arr[i]*=temp;
            temp = temp*nums.at(i);
        }
            return arr;
        }
        
    
};
