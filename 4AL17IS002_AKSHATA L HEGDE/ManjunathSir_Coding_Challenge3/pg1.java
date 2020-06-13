/*
Java Program To Check Whether The Given Number Is Binary Or not.
*/

import java.util.Scanner;
 
public class CheckForBinary
{
   static void numBinaryOrNot(int num)
   {
    boolean isBinary = true;
 
    int copyNum = num;
 
    while (copyNum != 0)
    {
      int temp = copyNum%10;  
 
      if(temp > 1)
       {
         isBinary = false;
         break;
       }
        else
       {
         copyNum = copyNum/10;    
       }
    }
 
     if (isBinary)
     {
        System.out.println(num+" is a binary number");
     }
     else
     {
        System.out.println(num+" is not a binary number");
     }
   }
 
  public static void main(String[] args)
  {
    Scanner sc=new Scanner(System.in);
    
    System.out.println("Enter a number");
    int num = sc.nextInt();
 
    numBinaryOrNot(num);
  }
}