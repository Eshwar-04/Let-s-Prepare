

import java.util.*;
public class MinMax {
public static void main(String[]args){
    Scanner s=new Scanner(System.in);

    int n=s.nextInt();
    int []ar=new int[n];
    int []br=new int[n];

for(int i=0;i<n;i++){
    int a,b;
    a=s.nextInt();
    b=s.nextInt();

    ar[i]= min(a,b);
   br[i] =max(a,b);
}

System.out.println("small elements : ");
for(int val:ar)
System.out.println(val);

System.out.println("large elements : ");
for(int val:br)
System.out.println(val);
 
}
public static int min(int a,int b)
    {
        if(a<b)
            return a;
        else
        return b;
    }

    public static int max(int a,int b)
    {
        if(a>b)
        return a;
        else
        return b;
    }

}