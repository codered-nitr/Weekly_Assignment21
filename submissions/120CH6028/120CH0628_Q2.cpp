class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
    vector<long long>ans(n);
    stack<long long> s;
 
    int arr1[n];
 

    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && s.top() <= arr[i])
            s.pop();
 

        if (s.empty())
            ans[i] = -1;        
        else
            ans[i] = s.top();       
 
        s.push(arr[i]);
    }
    return ans;
    }
};
