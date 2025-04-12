
/*
Q ] given an array an size n the task is to find the maximum and the minimum element.

input format:
n:size of array
arr[]=3,-1,5,4,3

constraints : 
1<=n<=10^5 
index of 10^-9<=n<=10^9

output format :
out put should be space sperated
maxelement minelement

sample input : -1 3 4 5 -5 9
expected output: 9 -5
*/

import java.util.*;
public class minmaxsum {
public static void main(String[]args){
    Scanner s= new Scanner(System.in);

    int n=s.nextInt();

    int []a=new int[n];
    for(int i=0;i<n;i++){
        a[i]=s.nextInt();
    }

int m=min(a);
int ma=max(a);
System.out.print(m+" "+ma);
    s.close();
}

public static int min(int a[])
{
    int n=a.length;
    int min=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
    }

    return min;

}

public static int max(int a[])
{
    int n=a.length;
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }

    return max;

}
}
