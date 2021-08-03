class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        unordered_map<char,int> m = {{'(',-1},{'[',-2},{'{',-3},{')',1},{']',2},{'}',3}};
        string s;
        cin>>s;
        stack<int> st;
        for(auto c : s)
        {
            if(m[c]<0)
             st.push(c);
            else
            {
                if(st.empty())
                return false;
                char x=st.top();
                st.pop();
                if(m[x]+m[c]!=0)
                 return false;
            }
        }
        if(st.empty())
         return true;
        else
         return false;
        // Your code here
    }

};
