import java.io.*;import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Main 
{
        public static void main(String[] args) {
            Scanner s=new Scanner(System.in);
            System.out.println("Enter a number:");
            int n=s.nextInt();            
            String ans="";
            if(n%2==1){
              ans = "Weird";
            }
            else {
                if (n >= 2 && n <= 5) {
                    ans = "Not Weird";
                } else if (n >= 6 && n <= 20) {
                    ans = "Weird";
                } else {
                    ans = "Not Weird";
                }
                
            }
            System.out.println(ans);
            
        }
    }