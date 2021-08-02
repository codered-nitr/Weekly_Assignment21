//string rotation
import java.util.*;

class GFG {
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner s=new Scanner(System.in);
		String S=s.next();
		int l=S.length();
		String S2=s.next();
		String S3=S+S;
		int j=0;
		for(int i=0;i<S3.length();i++)
		{
		    if(S2.charAt(j)!=S3.charAt(i))
		    continue;
		    else
		    {
		        j++;
		        if(j==S2.length())
		        break;
		    }
		    
		}
		if(j==l)
		System.out.println("Strings rotation of each other");
		else
		System.out.println("Strings not rotation of each other");
	}
}
