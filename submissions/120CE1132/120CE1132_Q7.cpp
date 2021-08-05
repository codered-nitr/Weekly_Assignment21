int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> p;
        for(int i=0;i<n;i++){
            p.push_back(make_pair(end[i],start[i]));
        }
        sort(p.begin(),p.end());
        int count=1;
        
        int lst=p[0].first;
        for(int i=1;i<n;i++){
            if(p[i].second>lst){
                count++;
                
                lst=p[i].first;
            }
        }
        return count;
    }
};
