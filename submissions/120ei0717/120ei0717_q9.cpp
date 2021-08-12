class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
         for(int i=0;i<words.size()-1;i++){
            for(int j=0;j<words[i].length();j++){
                if(!words[i+1][j]){
                    return false;
                }
                int s1 = order.find(words[i][j]);
                int s2 = order.find(words[i+1][j]);
                if(s1 == s2){
                    continue;
                }else if(s1 > s2){
                    return false;
                }else if(s1 < s2){
                    break;
                }
            }
        }
        return true;
    }
};
