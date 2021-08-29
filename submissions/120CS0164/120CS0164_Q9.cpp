class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector<int> p(26,0);
        for(int i=0;i<order.length();i++){
            p[order.at(i)-'a']=i;
        }
        int s=0;
        int j =0;
        while(j < words.size()-1){
            for(int i = 0;i<words[j].length();i++){
                if(i>=words[j+1].length())return false;
                if( words[j+1].at(i)!=words[j].at(i)){
                        if(p[words[j].at(i)-'a']>p[words[j+1].at(i)-'a'])return false;
                    else break;
                    
                }
                //if(words[j+1].length()>words[j].length() )return false;
            }
            
            j++;
        }

        return true;

}
};
