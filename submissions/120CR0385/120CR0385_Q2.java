import java.util.Scanner;
import java.util.Stack;
class next
{
    public static void find(int arr[],int N)
    {
      System.out.print("The next Greater element of "+arr[N-1] +" is -1\n");
      Stack<Integer> S = new Stack<Integer>();
      S.push(arr[N-1]);
      for(int i=N-2; i>=0 ;i--)
      {
        while(!S.empty() && (arr[i] > (int) S.peek())) 
        {
          S.pop();
        }  
        if(S.empty()) 
        {
            System.out.print("The next greater element of " + arr[i] +" is -1\n");
        }
        else 
        {
            System.out.print("The next greater element of " + arr[i] + " is " + (int) S.peek()+"\n");
        }
        S.push(arr[i]);
      }
    }
    public static void main(String[] args)  
    { 
        Scanner next= new Scanner(System.in);
        int n = next.nextInt();
        int a[] = new int[n];
        for(int i=0 ;i<n ;i++)
        {
            a[i] = next.nextInt();
        }
        find(a,n);
    }
}
