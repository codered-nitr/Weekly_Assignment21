int getPairsCount(int arr[], int n, int k) {
        
         map<int,int>mp;
         for(int i=0;i<n;i++)
         {
             mp[arr[i]]++;
             
         }
         int ans=0;
         for(auto it=mp.begin();it!=mp.end();it++)
         { 
             int cal=k-it->first;
             auto x=mp.find(cal);
            
             if(x!=mp.end()  )
             {
                 if(x!=it)
                 {
                     ans=ans+(x->second)*(it->second);
                 }
                 else if(x->second!=1)
                     {
                         ans=ans+(x->second)*(x->second-1);
                     }
             }
             
             
         }
         return ans/2;
}
