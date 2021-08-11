private static int sumOfMinMax(int[] a, int m) {
        int n = a.length;
        int sum = 0;
        for (int i = 0; i <= n - m; i++) {
            int min = Integer.MAX_VALUE;
            int max = Integer.MIN_VALUE;
            for (int j = i; j < i + m; j++) {
                min = Math.min(min, a[j]);
                max = Math.max(max, a[j]);
            }
            sum += (min + max);
        }
        return sum;
    }
    public static void main(String[] args) {
        int a1[] = new int[]{5, 9, 8, 3, -4, 2, 1, -5};
        int m = 4;
        System.out.println(sumOfMinMax(a1, m));
        int a2[] = new int[]{1, -1, 2, -2, 3, -3};
        int n = 2;
        System.out.println(sumOfMinMax(arr2, n));
    }
