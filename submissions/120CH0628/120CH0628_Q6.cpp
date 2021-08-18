class Solution {
public:
bool backspaceCompare(string s, string t) {

    stack<char> st;
    stack<char> st1;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] != '#'){
            st.push(s[i]);
        }
        else if(!st.empty()){
            st.pop();
        }
        
    }
    for (int i = 0; i < t.length(); i++)
    {
        if(t[i] != '#'){
            st1.push(t[i]);
        }
        else if(!st1.empty()){
            st1.pop();
        }
        
    }
    bool flag = true;
 
    if (st.size() != st1.size()) {
        flag = false;
        return flag;
    }

    while (st.empty() == false) {

        if (st.top() == st1.top()) {
            st.pop();
            st1.pop();
        }
        else {
            flag = false;
            break;
        }
    }
    return flag;   
}
};
