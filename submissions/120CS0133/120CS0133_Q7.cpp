//N meetings in one room
//Time - O(n logn)
//Space - O(1)

int maxMeetings(int start[], int end[], int n)
    {
       vector<pair<int,int>>vect;
       for(int i = 0; i<n; i++){
           vect.push_back(make_pair(end[i],start[i]));
       }
       sort(vect.begin(),vect.end());
       int ans = 1;
       int endtym = vect[0].first;
       for(int i = 1;i<vect.size();i++){
           
           if(endtym<vect[i].second){ 
               ans++;
               endtym = vect[i].first;
           }
       }
       return ans;
    }
