class Solution {
public:
    int search(vector<int>& a, int target) {
        int s=0 , e=a.size()-1 , mid;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(a[mid]==target)
                return mid;
            else if(a[s]<=a[mid])
            {
                if(target>=a[s]&&target<=a[mid])
                    e=mid-1;
                else
                    s=mid+1;
            }
            else
            {
                if(target>=a[mid] && target<=a[e]) 
                    s=mid+1;
                else 
                    e=mid-1;
            }
        }
        
        return -1;
    }
};
