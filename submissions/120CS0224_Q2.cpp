class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
     stack<long long> p;
     vector<long long> ans(n);
     for(int i=n-1  ;i>=0 ; i--){
         
         if(!p.empty()){
             while(!p.empty() && p.top()<=arr[i])
             p.pop();
         }
         ans[i]=(!p.empty()) ? p.top() : -1;
         p.push(arr[i]);
     }
     return ans;
    }
};
