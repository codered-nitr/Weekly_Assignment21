
 bool isAlienSorted(vector<string>& words, string order) {
         unordered_map<char,int>mp;
         for(int i = 0; i < order.size(); i++){
             mp[order[i]] = i;
         }
        // for(auto x : mp){
        //     cout<<mp.first<<" "<<mp.second<<endl;
        // }
         for(int i = 1; i < words.size(); i++){
             string m = words[i-1];
             string n = words[i];
             for(int j = 0; j < m.size(); j++){
                 char mstrt = m[j]; 
                 char nstrt = n[j];
                 if(j==n.size()) return false;
                 if(mp[mstrt]>mp[nstrt]) return false;
                 if(mp[mstrt]<mp[nstrt]) break;
             }
         }
        return true;
    }
