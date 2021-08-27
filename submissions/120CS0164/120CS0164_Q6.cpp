class Solution {
public:
    bool backspaceCompare(string s, string t) {
      
       
        stack<char> stack1;
        for(int i =0;i<s.length();i++){
            if(s[i]!='#')stack1.push(s[i]);
            else
                if(!stack1.empty())
                    stack1.pop();
                    
                
            
        }
        stack<char> stack2;
        for(int i =0;i<t.length();i++){
            if(t[i]!='#')stack2.push(t[i]);
            else
                if(!stack2.empty())
                    stack2.pop();
                    
                
            
        }
        if(stack1.size()!=stack2.size())return false;
        int tl = stack1.size();
        while(tl--){
            if(stack1.top()==stack2.top()){
                stack1.pop();
                stack2.pop();
            }
        }
        if(stack1.empty())return true;
        else
            return false;
    }
};
