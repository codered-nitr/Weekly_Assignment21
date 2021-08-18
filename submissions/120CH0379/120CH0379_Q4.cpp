class Solution {
public:
    int fib(int n) 
    {
        int a=0,b=1,c;
        if(n==0)
            c=0;
        else if(n==1)
            c=1;
        else
        {
            for(int i=1;i<n;i++)
            {
                c=a+b;
                a=b;
                b=c;
            }
        }
        return c;
    }
};
