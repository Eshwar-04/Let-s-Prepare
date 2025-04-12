import java.util.*;
public class palindrome {
   
    public static boolean pal(int n){
            int t=n;
            int rem,sum=0;
        while(n!=0)
        {
            rem=n%10;
            sum=sum*10+rem;
            n=n/10;
        }

       return (t==sum) ?  true :  false;
    }

    public static boolean pals(String st){
        String t="";
        int n=st.length();
        for(int i=n-1;i>=0;--i)
        {
            t=t + st.charAt(i);
        }
       return (st.equals(t)) ?  true :  false;
    }

     public static void main(String[]args){
            Scanner s = new Scanner(System.in);

           

            if(s.hasNextInt()){
                 int n = s.nextInt();
            if(!pal(n))
            System.out.print("no");
            else
            System.out.print("yes");
            }
            else{
                String st=s.nextLine();
                if(!pals(st))
                System.out.print("no");
                else
                System.out.print("Yes");
            }

    }
}