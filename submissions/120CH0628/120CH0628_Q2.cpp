#include<bits/stdc++.h> 

using namespace std;

void rearrange(int arr[], int n){
    int j= 0;                            
    for (int i = 0; i < n; i++)
    {
        if(arr[i]< 0){
            swap(arr[i], arr[j]);
            j++;
        }

    }
    
}

int main(){
    int n ; cin >>n;
    int arr[n];
    for(auto &i : arr){
        cin >> i;
    }
    rearrange( arr, n);
    for(auto &i : arr){
        cout << i << " ";
    }

    return 0;
}
