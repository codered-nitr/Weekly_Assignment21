//next greater element
vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long> ans(n);
        ans[n-1]=-1;
        long long int cmax=-1;
        for (long long int i=n-2;i>=0;i--){
            if (arr[i]<arr[i+1]){
                ans[i]=arr[i+1];
                long long int temp=arr[i+1];
                cmax=max(temp,cmax);
            }
            else{
                if (arr[i]>=cmax){
                    ans[i]=-1;
                    cmax=arr[i];
                }
                else{
                    for (int j=i+2;j<n;j++){
                        if (arr[j]>arr[i]){
                            ans[i]=arr[j];
                            break;
                        }
                    }
                }
            }
        }
        return ans;
    
    }
};



//USING STACK
//vector<long long> nextLargerElement(vector<long long> arr, int n){
//         vector<long long> ans(n);
        
        
//         stack<long long> st;
        
//         for (int i=n-1;i>=0;i--){
//             if (st.empty()){
//                 ans[i]=-1;
//                 st.push(arr[i]);
//             }
//             else{
//                 while (!st.empty() && st.top()<=arr[i]){
//                     st.pop();
//                 }
//                 if (st.empty()){
//                     ans[i]=-1;
//                     st.push(arr[i]);
//                 }
//                 else{
//                     ans[i]=st.top();
//                     st.push(arr[i]);
//                 }
//             }
                
            
//         }
        
//         return ans;
//     }
// };
