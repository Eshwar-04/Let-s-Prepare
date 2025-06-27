import java.util.*;
public class Main
{
	public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n=s.nextInt();
        int a[]=new int[n];
        for(int i=0;i<n;i++)
        a[i]=s.nextInt();
        
        int k=s.nextInt();
        
        for(int i=n-k;i<n;i++)
        System.out.print(a[i]+" ");
        
        for(int i=0;i<n-k;i++)
        System.out.print(a[i]+" ");
	}
}
