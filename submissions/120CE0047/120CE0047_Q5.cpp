vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
           
           vector<int> v1;
           set_intersection(A,A+n1,B,B+n2,back_inserter(v1));
           vector <int> ans;
           set_intersection(v1.begin(),v1.end(),C,C+n3,back_inserter(ans));
           vector <int> final;
           for(int i=0;i<ans.size();i++)
           {
               if(ans[i]!=ans[i+1])
               final.push_back(ans[i]);
           }
           return final;
        }
