import java.util.*;
public class Main
{
  public static void main(String[] args) {
      Scanner sc= new Scanner(System.in);
        int m = sc.nextInt();
        int n = sc.nextInt();
        int[] arr = new int[m];
        for(int i=0;i<m;i++){
            arr[i] = sc.nextInt();
        }
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=i+1;j<m;j++){
                if(arr[i]+arr[j]==n){
                    ans++;
                }
            }
        }
    System.out.println("Number of pairs with the given sum : "+ans);
  }
}
