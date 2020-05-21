import java.util.*;
import java.io.*;

class TestClass {
    public static void main(String args[] ) throws Exception {
       
       Scanner sc = new Scanner(System.in);
       int t = sc.nextInt();
       long c = 0;
       for(int i = 0; i<t; i++)
       {
           long n = sc.nextLong();
           String s = sc.next();
           for(int j=0;j<n-1;j++)
           {
           if((s.charAt(j) >= 'b' && s.charAt(j) <= 'z') && (s.charAt(j)!='a' && s.charAt(j)!='e' && s.charAt(j)!='i' && s.charAt(j)!='o' && s.charAt(j)!='u'))
           {
               if((s.charAt(j+1)=='a' || s.charAt(j+1)=='e' || s.charAt(j+1)=='i' || s.charAt(j+1)=='o' || s.charAt(j+1)=='u'))
               {
                   c++;
               }
           }
           } 
           System.out.println(c);
           c = 0;
       }
       


    }
}
