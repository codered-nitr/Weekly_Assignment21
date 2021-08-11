import java.util.*;
public class Main
{
  public static void sums(String[] args) {
      Scanner sc= new Scanner(System.in);
        int m = sc.nextInt();
        int n = sc.nextInt();
        int[] a = new int[m];
        HashMap<Integer, Integer> fre = new HashMap<Integer, Integer>();
        for(int i=0;i<m;i++){
            a[i] = sc.nextInt();
            Integer j = fre.get(a[i]); 
            fre.put(a[i], (j == null) ? 1 : j + 1); 
        }
        int answer = 0;
        for (int i = 0; i < m; i++)
        {
            if (a[i] == n - a[i])
            {
                answer += (fre.get(a[i]) - 1);
            }
            else
            {
                Integer j = fre.get(n - a[i]); 
                if(j!=null)
                    answer += j;
            }
        }
        answer /= 2;
    System.out.println("Number of pairs with the given sum are: "+answer);
  }
}
