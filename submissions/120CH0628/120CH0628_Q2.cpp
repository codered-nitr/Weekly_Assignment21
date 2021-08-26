
class Solution
{
public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)
    {
        int i = 0, j = 0, count = 0;
        while (i < n and j < m)
        {
            if (a[i] < b[j])
            {
                count++;
               i++;
            }
            else if (a[i] > b[j])
            { 
              count++;
              j++;
            }
        }
        while (i < n)
        {
            count++;
            i++;
        }
        while (j < m)
        {
            count++;
            j++;
        }
        return count;
    }
};

