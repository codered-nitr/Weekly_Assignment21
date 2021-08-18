class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> mul;
        int mltpy=1,count=0,size=(nums.end()-nums.begin());
        for(int i=0;i<size;i++){
            int it=nums[i];
            if(it!=0)
                mltpy*=it;
            else
                count++;
        }
        cout<<count;
        if(count>1){
           for(int i=0;i<size;i++)
                mul.push_back(0);
        }
        else if(count==1){
            for(int i=0;i<size;i++){
               int temp=mltpy;
            if(nums[i]!=0)
                mul.push_back(0);
            else
                mul.push_back(mltpy); 
            }
            
        }
        else{
            for(int i=0;i<size;i++)
            {
                int tmp=mltpy;
                mul.push_back(tmp/nums[i]);
            }
        }
        return mul;
    }
};
