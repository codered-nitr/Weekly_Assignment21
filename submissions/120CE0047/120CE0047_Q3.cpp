 int i;
    int rs=0,cs=0;
    vector <int> v;
    while(rs<r&&cs<c)
    {
        for(i=cs;i<c;i++)
        {
            v.push_back(matrix[rs][i]);
        }
        rs++;
        for(i=rs;i<r;i++)
        {
            v.push_back(matrix[i][c-1]);
        }
        c--;
        if(rs<r)
        {
            for (i = c-1; i>=cs;i--)
            {
                v.push_back(matrix[r-1][i]);
            }
            r--;
        }
        if(cs<c)
        {
            for(i=r-1;i>=rs;i++)
            {
                v.push_back(matrix[i][cs]);
            }
            cs++;
        }
    }
    return v; 
