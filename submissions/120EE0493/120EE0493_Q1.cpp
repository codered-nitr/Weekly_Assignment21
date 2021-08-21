// Evaluation of Postfix Expression - https://practice.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1#

bool is_operator(char a) {
    return a=='+' || a=='-' || a=='*' || a=='/';
}
    
int operation(int a, char b, int c) {
    if(b=='+') return a+c;
    else if(b=='-') return a-c;
    else if(b=='*') return a*c;
    else if(b=='/') return a/c;
}
    
int evaluatePostfix(string s) {
    stack<int> a;
    int n = s.size();
    for(int i=0;i<n;i++) {
        if(is_operator(s[i])) {
            int c = a.top();
            a.pop();
            int b = a.top();
            a.pop();
            a.push(operation(b,s[i],c));
        } else a.push(s[i]-'0');
    }
        
    return a.top();
}
