class Solution {
public:
    int maxProfit(vector<int>& a)
    {
        int min=a[0];
        int mp=0;
        for(int i=1;i<a.size();i++)
        {
            if((a[i]-min)>mp)
                mp=a[i]-min;
            if(min>a[i])
                min=a[i];
        }
        return mp;
    }
};
