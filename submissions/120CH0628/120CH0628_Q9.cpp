int solve(string s) {
    int open = 0;
    int close = 0;
 
    for (int i = 0; i < s.length(); i++) {

        if(s[i] == '('){
            open++;
        }
        else{
            open--;
        }

 
        if (open == -1) {
            close += 1;
            open += 1;
        }
    }
    return open + close;
}
