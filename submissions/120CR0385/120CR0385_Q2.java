public static void shift(int a[], int m)
    {
        int j = 0, temp;
        for (int i = 0; i < m; i++)
        {
            if (a[i] < 0)
            {
                if (i != j)
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
                j++;
            }
        }
    }
    public static void print(int a[], int m)
    {
        for (int i = 0; i < m; i++)
            System.out.print(a[i] + " ");
    }
    public static void main(String args[])
    {
        int a[] = { 2,4,-10,13,-7,-60,52,8,-19 };
        int m = a.length;
        shift(arr, m);
        print(arr, m);
    }
