vector<long long> nextLargerElement(vector<long long> a, int n)
    {
       stack <long long > S; vector<long long> v;
       for(int i=n-1;i>=0;i--)
       {
           if(S.empty())
           v.push_back(-1);
           else
           {
               while(!S.empty())
               {
               if(S.top()<=a[i])
               S.pop();
               else
               break;
               }
               if(S.empty())
                   v.push_back(-1);
               else
                   v.push_back(S.top());
           }
           S.push(a[i]);
       }
       reverse(v.begin(),v.end());
       return v;
    }
