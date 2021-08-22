vector<long long> nextLargerElement(vector<long long> a, int n){
        vector<long long> ans;
        
        stack <long long> st;
        
      
          for(int i=a.size()-1;i>=0;i--)
          {
               while (!st.empty() && st.top() <= a[i])
               st.pop();
               
               if(st.empty())
               ans.push_back(-1);
               else
               ans.push_back(st.top());
               
               st.push(a[i]);
 
          }
          reverse(ans.begin(),ans.end());
       
        return ans;
        
    }
