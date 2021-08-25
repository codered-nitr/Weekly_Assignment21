 string longestPalin (string s) {
        int ans=1;
        int start=0;
        int l,h;
        for(int i=0;i<s.length();i++)
        {
            l=i-1;
            h=i;
            while(l>=0 && h<s.length() && s[l]==s[h])
            {
                l--;
                h++;
            }
            
            l++;
            h--;
            if(s[l]==s[h] && (h-l+1)>ans)
            {
                start=l;
                ans=h-l+1;
            }
            
            l=i-1;
            h=i+1;
            while(l>=0 && h<s.length() &&s[l]==s[h])
            {
                l--;
                h++;
            }
            
            l++;
            h--;
            
             if(s[l]==s[h] && (h-l+1)>ans)
            {
                start=l;
                ans=h-l+1;
            }
            
          
        }
        
          string res="";
            while(ans--)
            {
                res+=s[start];
                start++;
            }
            
            return res;
    }
