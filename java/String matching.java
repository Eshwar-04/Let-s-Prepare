/*

Problem Statement



Imagine you work as a software developer in a hospital's IT department. The hospital uses a software system to manage patient data efficiently. As part of the data validation process, the hospital wants to implement a feature that checks whether two patient names contain the same characters or not. 



Your task is to develop a program that takes two patient names as input and checks whether they contain the same characters, regardless of the order of characters. 

Input format :
The input consists of two strings representing the patient names.

Output format :
The output prints whether the given names contain the same characters or not.



Refer to the sample output for the exact text and format.

Code constraints :
The maximum length of the input strings is 50.

The strings are case-sensitive.

Sample test cases :
Input 1 :
Clan
clan
Output 1 :
Clan and clan does not have the same characters
Input 2 :
Arun
Arul
Output 2 :
Arun and Arul does not have the same characters
Input 3 :
Joe
eJo
Output 3 :
Joe and eJo have the same characters

*/

import java.util.*;
public class Main
{
	public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
       String a=s.next();
        String b=s.next();
       int c=0;
       for(int i=0;i<a.length();i++)
       {
           char m=a.charAt(i);
           if (b.contains(String.valueOf(m)))
           c++;
       }
       
       if(c==a.length())
       System.out.print(a+" "+b+"yes");
       else
       System.out.print(a+" "+b+"no");
	}
}
