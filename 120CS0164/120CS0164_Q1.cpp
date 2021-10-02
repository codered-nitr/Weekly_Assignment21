class Solution {
public:
    bool Palin(string s, int start, int end){
        while(start<end){
            if(s[start]==s[end]){
                start++;
                end--;
            }
            else
                return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        
        int start = 0;
        int last = s.length()-1;
    
        while(start<last){
            if(s[start]==s[last]){
                start++;
                last--;}
            else {
                return (Palin(s,start+1,last)||Palin(s,start,last-1));
            }
            
        }
        return true;
        
    }
};
