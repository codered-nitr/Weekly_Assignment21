//grouping anagrams
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<int,vector<string>> m;
        for (int i=0;i<strs.size();i++){
            int freq[26]={0};
            for (int j=0;j<strs[i].length();j++){
                freq[strs[i][j]-'a']++;
            }
            long long key =0,p=11,s=11,mod= 1e9+7;
            for (int k=0;k<26;k++){
                key = (key+p*freq[k]) % mod;
                p*=s;
                p %= mod;
            }
            key +=strs[i].length();
            m[key].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for (auto v :m)
            ans.push_back(v.second);
        
        return ans;
        
    }
};
