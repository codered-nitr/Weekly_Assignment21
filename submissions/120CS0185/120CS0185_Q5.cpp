//common elements in 3 sorted arrays
class Solution
{
    public:    
       vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            int p1=0,p2=0;
            vector<int> v;
            while (p1<n1 && p2<n2){
                if (a[p1]==b[p2]){
                    if ( v.empty())
                        v.push_back(a[p1]);
                    else if (v.back()!=a[p1])
                        v.push_back(a[p1]);
                    p1++;
                    p2++;
                    
                }
                else if(a[p1]>b[p2]){
                    p2++;
                }
                else if(a[p1]<b[p2]){
                    p1++;
                }

            }
            
            if (v.size()==0)
                return v;
                
            vector<int> ans;
            p1=0,p2=0;
            
            while (p1<n3 && p2<v.size()){
                if (c[p1]==v[p2]){
                    if ( ans.empty())
                        ans.push_back(c[p1]);
                    else if (ans.back()!=c[p1])
                        ans.push_back(c[p1]);
                        
                    p1++;
                    p2++;
                }
                else if(c[p1]>v[p2]){
                    p2++;
                }
                else if(c[p1]<v[p2]){
                    p1++;
                }

            }
            
            return ans;
        }

};
