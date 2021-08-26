vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long> ans;
        stack<long long> temp;
        for(long long i=1;i<n;i++){
            if(temp.size()==0){
                if(arr[i]>arr[i-1]){
                    ans.push_back(arr[i]);
                }
                else{
                    ans.push_back(-1);
                    temp.push(i-1);
                }
            }
            else{
                while(temp.size()>0 && arr[i]>arr[temp.top()]){
                    ans[temp.top()]=arr[i];
                    temp.pop();
                }
                if(arr[i]>arr[i-1]){
                    ans.push_back(arr[i]);
                }
                else{
                    ans.push_back(-1);
                    temp.push(i-1);
                }
                
            }
        }
        ans.push_back(-1);
        return ans;
        
        
    }
