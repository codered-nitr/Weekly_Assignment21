class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
       map<char,int> m;
        int x=1;
        for(int i=0;i<order.length();i++){
            m[order[i]]=x;
            x++;
        }
        int j;
        for(int i=0;i<words.size()-1;i++){
            string first=words[i];
            string second=words[i+1];
            int k=min(first.length(),second.length());
            for( j=0;j<k;j++){
                if(m[first[j]]>m[second[j]]){
                    return false;
                }
                if(m[first[j]]<m[second[j]]){
                    break;
                }
            }
            if(first.length()>second.length() && j==k){
                return false;
            }
        }
        return true;
    }
};
