bool subArrayExists(int arr[], int n)
    {
        set<int> check_sum;
        int curr_sum=0;
        for(int i=0;i<n;i++)
        {
            curr_sum=curr_sum+arr[i];
            if(curr_sum==0)
                return 1;
            if(check_sum.find(curr_sum)!=check_sum.end())
                return 1;
            check_sum.insert(curr_sum);
        }
        return 0;
    }
