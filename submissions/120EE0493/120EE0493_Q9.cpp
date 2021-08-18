// Verifying an Alien Dictionary - https://leetcode.com/problems/verifying-an-alien-dictionary/

vector<int> alpha;
    
void fill_alpha(string &order) {
    int n = order.size();
    alpha.assign(26,0);
    for(int i=0;i<n;i++) {
        alpha[order[i]-'a'] = i;
    }
}

bool compare(string a, string b) {
    int n = min(a.size(),b.size());
    for(int i=0;i<n;i++) {
        if(a[i]!=b[i]) return alpha[a[i]-'a'] > alpha[b[i]-'a'];
    }
     
    if(a.size()>b.size()) return true;
    return false;
}
  
bool isAlienSorted(vector<string>& words, string order) {
    int n = words.size();
    fill_alpha(order);
    for(int i=1;i<n;i++) {
        if(compare(words[i-1],words[i])) return false;
    }
        
   return true;
}
