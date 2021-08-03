vector<int> solve(vector<int>& a, vector<int>& b) {
    int i=0,j=0;
    vector<int> c;

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            c.push_back(a[i++]);
        } else {
            c.push_back(b[j++]);
        }
    }

    while (i < a.size()) {
        c.push_back(a[i++]);
    }

    while (j < b.size()) {
        c.push_back(b[j++]);
    }
    return c;
}
