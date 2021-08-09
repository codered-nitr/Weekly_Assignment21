int maxSubArraySum(int a[],int size)
{
    int max_sum=0;
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+a[i];
        if(sum>max_sum)
            max_sum=sum;
        if(sum<0)
            sum=0;
    }
    return max_sum;

}
