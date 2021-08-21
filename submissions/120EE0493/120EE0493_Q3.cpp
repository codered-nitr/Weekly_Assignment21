// Subarray with 0 sum - https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1

bool subArrayExists(int arr[], int n) {
    unordered_set<int> prefix;
    prefix.insert(arr[0]);
    prefix.insert(0);
    for(int i=1;i<n;i++) {
        arr[i] += arr[i-1];
        prefix.insert(arr[i]);
    }
        
    return !(prefix.size()==n+1);
}
