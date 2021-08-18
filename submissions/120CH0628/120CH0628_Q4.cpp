class Solution {
public:
    int fib(int n) {
        int a= 0 , b=1, ans = 0; 
    if(n == 0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    if(n>=2){
        while(n-2 >= 0){
            ans = a+ b; 
            a= b;
            b = ans;
            n--;
        }
    }
    return ans;
    }
};
