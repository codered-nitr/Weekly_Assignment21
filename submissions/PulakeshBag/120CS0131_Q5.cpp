class Solution {
public:
   
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;
        
        for( auto str:strs)
        {
            string temp=strsort(str);
            mp[temp].push_back(str);
        }
        
        for( auto vtr:mp)
        {
            ans.push_back(vtr.second);
        }
        return ans;
    }
private:
    string strsort(string str){
        int count[26]={0};
        
        for( auto c:str)
            count[c-'a']++;
        string s;
        for( int i=0;i<26; i++)
            s+=string(count[i],'a'+i);
        return s;
    
    
    }
    
};
