bool string_rotation(string a, string b) {
    int n = a.size();
    if(b.size()!=n) return false;

    unordered_set<string> s;
    for(int i=0;i<n;i++) s.insert(a.substr(i) + a.substr(0,i));
    int temp = s.size();
    s.insert(b);
    if(temp==s.size()) return true;
    else return false;
}

