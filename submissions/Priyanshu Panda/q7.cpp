class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.length();

    int res = INT_MAX;
        if(k == n){
        return "0";
    }
    for (int i = 0; i < n - k; i++)
    {
        string temp = num;
        temp.erase(temp.begin() + i, temp.begin() + i + k);
        stringstream numStr(temp);
        int x = 0;
        numStr >> x;
        res = min(res, x);
    }
    string ans = to_string(res);
    return ans;
   
