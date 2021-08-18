// Fibonacci Number - https://leetcode.com/problems/fibonacci-number/

int fib(int n) {
    long long first = 0, second = 1;
    if(n==0) return 0;
    n--;
    while(n--) {
        long long temp = first + second;
        first = second;
        second = temp;
    }
        
    return second;
}
