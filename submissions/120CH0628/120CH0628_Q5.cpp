#include <bits/stdc++.h>

using namespace std;
bool check(int a, int b, int c){
    return (a==b and a==c);

    
}
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
{
    vector <int>ans;
    int i =0, j= 0, k=0;
    while (i< n1 or j< n2 or k< n3)
    {
        if(A[i] <= B[j] ){
            if(check(A[i], B[j], C[k])){
                ans.push_back(A[i]);
            }
            i++;
        }
        if(B[j] <= C[k] ){
            if(check(A[i], B[j], C[k])){
                ans.push_back(A[i]);
            }
            j++;
        }
        if(C[k] <= A[i] ){
            if(check(A[i], B[j], C[k])){
                ans.push_back(A[i]);
            }
            k++;
        }
    }
    return ans;
}
int main()
{
    int n1 = 3;
    int A[n1] = {1, 2,3};
    int n2 = 3;
    int B[n2] = {1, 2,3};
    int n3 = 3;
    int C[n3] = {1, 2,3};
    vector <int>ans = commonElements ( A,  B,  C,  n1,  n2 , n3);
    for(auto &i: ans){
        cout << i;
    }

 return 0;
}
