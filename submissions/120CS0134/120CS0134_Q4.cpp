#include <bits/stdc++.h>
using namespace std;
//Author
//Abhas

class solution
{
public:
    bool areRotations(string str1, string str2)
    {   if(str1.length()!=str2.length())
    {
        return false;
    }
        string temp=str2 +str2;
        if(temp.find(str1)!=string::npos)
        {
            return true;
        }
        return false;
    }
};

int main()
{   
    string a,b;
    cin>>a>>b;
    solution con;
    if(con.areRotations(a,b))
    {
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;

    return 0;
}
