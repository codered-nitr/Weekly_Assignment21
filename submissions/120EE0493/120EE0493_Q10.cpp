// Search in Rotated Sorted Array - https://leetcode.com/problems/search-in-rotated-sorted-array/

int pivot(vector<int> &nums) {
    int s = 0, e = nums.size()-1;
    while(s<e) {
        int k = (s+e)/2;
        if(nums[0]>nums[k]) e = k - 1;
        else if(nums[0]<nums[k]) {
            if(k!=nums.size()-1 && nums[k+1]<nums[k]) return k; 
            else if(k==nums.size()) return k;
            else s = k + 1;
        } else return (nums[0]>nums[1]) ? 0 : 1;
    }
      
    return s;
} 
    
int search(vector<int>& nums, int target) {
    if(nums.size()==1) {
        return (target==nums[0]) ? 0 : -1 ;    
    }

    int n = nums.size(); 
    int k = pivot(nums), s = k+1, e = s+n;
    while(s<=e) {
        int k = (s+e)/2;
        if(nums[k%n] > target) e = k - 1;
        else if(nums[k%n] < target) s = k + 1;
        else return k%n;
    }
        
    return -1;
}
