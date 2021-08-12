bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> m;
        for(int i=0;i<order.length();i++)
        {
            m[order[i]]=i;
        }
        for(int i=0;i<words.size()-1;i++)
        {
            int l=min(words[i].length(),words[i+1].length());
if(l!=words[i].length()&&l==words[i+1].length()&& words[i].compare(0,l,words[i+1],0,l)==0)
{
    return false;
}
            for(int j=0;j<l;j++)
            {
                if( m[words[i][j]] > m[words[i+1][j]] )
                    return false;
                 if( m[words[i][j]] < m[words[i+1][j]] )
                     break;
            }
        }
        return true;
    }
