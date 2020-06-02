import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
 
public class Main
{
    public static void main(String[] args) 
    {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter number:");
        int n = s.nextInt();
        for(int i=1;i<11;i++)
        {            
	System.out.println(""+n +" x " +i +" = " +(n*i));
        }
    }
  
}