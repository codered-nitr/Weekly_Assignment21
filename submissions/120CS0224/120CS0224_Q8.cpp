class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        vector<int > ans;
        deque<int > max;
        for(int i=0 ; i<k ; i++){
            while(!max.empty() && arr[i]>=arr[max.back()])
            max.pop_back();
            max.push_back(i);
        }
        ans.push_back(arr[max.front()]);
        for(int i=k ; i<n ; i++){
            while(!max.empty() && max.front()<=(i-k))
              max.pop_front();
            
            while(!max.empty() && arr[i]>=arr[max.back()])
              max.pop_back();
              max.push_back(i);
              ans.push_back(arr[max.front()]);
        }
        return ans;
    }
};
