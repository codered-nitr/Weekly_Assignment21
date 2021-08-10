class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> ss;
        stack<char> st;
        for(auto it:s)
        {
            if(it!='#')
                ss.push(it);
            else if(!ss.empty())
                ss.pop();
        }
        for(auto it:t)
        {
            if(it!='#')
                st.push(it);
            else if(!st.empty())
                st.pop();
        }
        if(ss.size()!=st.size())
            return false;
        else
        {
             while (!ss.empty() && !st.empty()) 
             {
                 if(ss.top()!=st.top())
                     return false;
                ss.pop();
                st.pop();
             }
        }
            
        return true;
        }
       
        
    
};
