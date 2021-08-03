int maxMeetings(int start[], int end[], int n)
    {
        int i;
       vector <pair<int,int>> v;
       for(i=0;i<n;i++)
       {
           pair<int,int> p;
           p.first=end[i];
           p.second=start[i];
           v.push_back(p);
       }
       sort(v.begin(),v.end());
       int count=1;
       int z=v[0].second;
       int x=v[0].first;
        for(i=0;i<n-1;i++)
        {
            if(v[i+1].first>v[i].second&&v[i+1].second>z&&v[i+1].second>x)
            {
                count++;
                z=max(v[i+1].second,z);
                x=v[i+1].first;
            }
        }
        return count;
    }
