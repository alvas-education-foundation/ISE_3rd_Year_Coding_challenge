/*1.	Given an integer n, , perform the following conditional actions:
•	If  n is odd, print Weird
•	If n is even and in the inclusive range of  2 to 5 , print Not Weird
•	If  n is even and in the inclusive range of 6 to 20 , print Weird
•	If  n is even and greater than 20 , print Not Weird
Complete the stub code provided in your editor to print whether or not  is weird.
Input Format
A single line containing a positive integer,n .
Constraints
•	1<=n<=100 */



import java.io.*;
 import java.util.*; 
 import java.text.*; 
 import java.math.*; 
 import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();            
        String ans="";
        if(n%2==1 || ( (n%2==0) && (n>=6 && n <= 20 ) ) )
        {
          ans = "Weird";
        }
        else{
            ans = "Not Weird";
           //Complete the code

        }
        System.out.println(ans);

    }
}
