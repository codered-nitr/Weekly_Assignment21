// Min bracket addition - https://binarysearch.com/problems/Minimum-Bracket-Addition

int solve(string s) {
    int c = 0,mn=1e6;
    int n = s.size();
    for(int i=0;i<n;i++) {
        if(s[i]==')') c--;
        else c++;

        mn = min(mn,c);
    }

    mn = max(0,-1*mn);
    return mn+mn+c;
}
