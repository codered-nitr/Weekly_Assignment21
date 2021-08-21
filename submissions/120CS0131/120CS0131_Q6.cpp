class Solution {
public:
    void nextPermutation(vector<int>& v) {
        int i=v.size()-2,j=v.size()-1;
        while(i>=0){
            if(v[i]<v[j])
                    break;
            i--;j--;
        }
        int sp1=i,sp2=i+1,t,mn=v[sp2];
        if(sp1!=-1){
            for(int i=sp2+1;i<v.size();i++){
                if(v[i]>v[sp1])
                {
                    mn=min(mn,v[i]);
                    if(mn==v[i])
                        sp2=i;
                }
            }
            swap(v[sp1],v[sp2]);
            sort(v.begin()+sp1+1,v.end());
        }
        else
        {
            reverse(v.rbegin(),v.rend());
        }
    }
};
