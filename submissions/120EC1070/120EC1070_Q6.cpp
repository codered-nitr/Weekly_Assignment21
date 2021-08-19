class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        stack<char> s2;
        for (int i=0;i<s.size();i++){
            if(s.at(i)=='#'){
                if (!s1.empty()){
                s1.pop();
                }
            }
            else{
            s1.push(s.at(i));
            }
        }
        for (int j=0;j<t.size();j++){
            if(t.at(j)=='#'){
                if(!s2.empty()){
                s2.pop();
                }
            }
            else{
            s2.push(t.at(j));
            }
        }
    return s1==s2;
    }
};
