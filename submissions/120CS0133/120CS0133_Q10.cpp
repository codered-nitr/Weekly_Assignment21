int search(vector<int>& nums, int target) {
         //array
         int n = nums.size();
         int low = 0, high = n-1;
         int mid;
       
        
         while(low<=high){
             
            mid = (low+high)/2;
             // cout<<mid<<endl;

                    if(nums[low]==target) return low;
                    if(nums[high]==target) return high;
                    if(nums[mid]==target) return (mid);
             
            if(nums[low]<=nums[mid]){
                if(target>nums[mid] || target<nums[low]){low = mid + 1;}
                
                else high = mid - 1;
            }
             else{
                 if(target < nums[mid] || target>nums[low]) {high = mid - 1;}
                 
                 else low = mid + 1;
             }
         }
             return -1;
    }
