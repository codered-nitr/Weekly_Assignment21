class Solution {
public:
    int fib(int n) {
        vector<int> fb(100);
        fb[0]=0;fb[1]=1;
        for(int i=2;i<35;i++){
            fb[i]=fb[i-2]+fb[i-1];
        }
        // for(int i=0;i<34;i++)
        //         cout<<fb[i]<<" ";
        return fb[n];
    }
};
