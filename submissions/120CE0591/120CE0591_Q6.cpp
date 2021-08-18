class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> a;
        stack<char> b;
        for(int i=0;i<s.length();i++){
            if(s[i]=='#' && a.size()!=0){
                a.pop();
            }
            else if(s[i]!='#'){
                a.push(s[i]);
            }
        }
            for(int i=0;i<t.length();i++){
            if(t[i]=='#' && b.size()!=0){
                b.pop();
            }
            else if(t[i]!='#'){
                b.push(t[i]);
            }
        }
        if(a==b){
            return true;
        }
        else{
            return false;
        }
    }
};
