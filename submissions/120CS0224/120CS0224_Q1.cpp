//Count pair with given sum
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
          int count_2=0;
       unordered_map<int,int> m;
        for(int i=0 ; i<n ; i++)
        m[arr[i]]++;
        for(int i=0 ; i<n ; i++){
            count_2+=m[k-arr[i]];
            if(arr[i]*2==k)
            count_2--;
        }
        
        return (count_2/2);
    }
};
