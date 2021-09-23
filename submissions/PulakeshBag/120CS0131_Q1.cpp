class Solution {
public:
    bool validPalindrome(string str) {
        int len=str.length();
        for(int i=0, j=len-1; i<j;i++, j--)
        {
            if(str[i]!=str[j])
                return (IsPallindrome(str,i,j-1) || IsPallindrome(str, i+1,j));
        }
        return true;
    }
    
    
private:
    bool IsPallindrome(string str, int i, int j){
        while(i<=j){
            if(str[i]!=str[j])
                return false;
            i++;j--;
        }
        return true;
    }
};
