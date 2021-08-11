 public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int price[] = {7, 1, 5, 3, 6, 4};
        int a = Profit(price, price.length);
        System.out.println(a);
    }
    private static int Profit(int[] price, int m) {
        int maxp[] = new int[m];
        int max = Integer.MIN_VALUE;
        for (int i = n - 1; i >= 0; i--) {
            if (price[i] > max) {
                max = price[i];
                maxp[i] = Integer.MIN_VALUE;
            } else {
                maxp[i] = max;
            }
        }
        int profit = 0;
        for (int i = 0; i < m; i++) {
            if (maxp[i] != Integer.MIN_VALUE) {
                profit = Math.max(profit, maxp[i] - price[i]);
            }
        }
        return profit;
    }
