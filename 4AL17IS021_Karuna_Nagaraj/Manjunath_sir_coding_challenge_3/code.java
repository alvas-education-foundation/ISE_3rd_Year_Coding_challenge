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






/*
Question:
Java program to print alternate prime numbers.
*/

class JavaExample  
{ 
    static int checkPrime(int num) 
    { 
	int i, flag = 0; 
	for(i = 2; i<= num / 2; i++) 
	{ 
	   if(num % i == 0) 
	   { 
	       flag = 1; 
	       break; 
	   } 
	} 
	if(flag == 0) 
	   return 1; 
	else
	   return 0; 
    } 
    static void printAltPrime(int n) 
    {
	int temp = 2; 

	for(int num = 2; num <= n-1; num++) 
	{ 
	   if (checkPrime(num) == 1) 
	   {  
		if (temp % 2 == 0) 
		   System.out.print(num + " "); 

		temp ++; 
	   } 
	} 
    } 

    public static void main(String[] args)  
    { 
	int num = 20; 
	System.out.print("Alternate prime numbers upto " + num+" are: ");  
	printAltPrime(num); 
    } 
}





/*
Java program to print Hollow Inverted Pyramid star pattern program.
*/

class prog3{ 
      
    public static void main(String args[]) 
    { 
        int n = 6; 
      
        printPattern(n); 
    } 
      
    static void printPattern(int n) 
    { 
        int i, j, k = 0; 
        for (i = 1; i <= n; i++) // row=6 
        { 
            // Print spaces 
            for (j = i; j < n; j++) { 
                System.out.print(" "); 
            }  
            while (k != (2 * i - 1)) { 
                if (k == 0 || k == 2 * i - 2) 
                    System.out.print("*"); 
                else
                    System.out.print(" "); 
                k++; 
                ; 
            } 
            k = 0; 
            System.out.println();  
        } 
        for (i = 0; i < 2 * n - 1; i++) { 
            System.out.print("*"); 
        } 
    } 
} 