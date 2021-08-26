// Next Greater Element - https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1

vector<long long> nextLargerElement(vector<long long> arr, int n) {
    vector<long long> nge(n,-1);
    stack<long long> st;
    for(int i=0;i<n;i++) {
        if(!st.empty() && arr[st.top()]<arr[i]) {
            while(!st.empty() && arr[st.top()]<arr[i]) {
                nge[st.top()] = arr[i];
                st.pop();
            }
        }
           
        st.push(i);
    }
        
    return nge;
}
