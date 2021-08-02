vector<int> solve(vector<int>& a, vector<int>& b) {
    
    vector<int> c;
    vector<int> :: iterator ita;
    vector<int> :: iterator itb;
    ita=a.begin();
    itb=b.begin();
    if(a.empty())
        return b;
    if(b.empty())
        return a;
    while( ita <= ( a.end() -1 ) && itb <= (b.end()-1))
    
    {
        if(*ita<*itb)
        {
            c.push_back(*ita);
            ita++;
        } 
        else if(*ita>*itb)
        {
            c.push_back(*itb);
            itb++;
        }  
        
       else
        {
            c.push_back(*ita);
            c.push_back(*itb);
            ita++;
            itb++;
        }
    }
    
    while(itb<=(b.end()-1))
    {
        c.push_back(*itb);
        itb++;
    }
            
        
    
    while(ita<=(a.end()-1))
    {
        c.push_back(*ita);
        ita++;
    }
            
     
        
    return c;
}
