class Solution{
  public:
     int majorityElement(int a[], int size)
    {
        int max = maxCount(a, size);
        return isMajority(a, size, max) ? max : -1;
    }
    int maxCount(int a[], int size)
    {
        int index = 0, count = 1;
        for (int i = 1; i < size; i++)
        {
            if (a[index] == a[i])
                count++;
            else
                count--;
            if (count == 0)
            {
                index = i;
                count = 1;
            }
        }
        return a[index];
    }
    bool isMajority(int a[], int size, int max)
    {
        int count = 0;
        for (int i = 0; i < size; i++)

            if (a[i] == max)
                count++;

        if (count > size / 2)
            return 1;

        else
            return 0;
    }
};
