vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long>vect;
        stack<long long>s;
        s.push(arr[n-1]);
        for(int i = n - 2; i>=0; i--){
            while(!s.empty() && s.top()<=arr[i]){
                s.pop();
            }
            long long ans;
            if(s.empty()){
                ans = -1;
            }
            else ans = s.top();
            
            vect.push_back(ans);
            s.push(arr[i]);
        }
        reverse(vect.begin(),vect.end());
        vect.push_back(-1);
        return vect;
        
    }
