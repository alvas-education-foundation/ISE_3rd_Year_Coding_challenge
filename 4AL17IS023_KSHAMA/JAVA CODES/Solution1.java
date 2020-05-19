import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;
public class Solution1 {
public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();            
        String ans="";
        if(n%2==1 || ( (n%2==0) && (n>=6 && n <= 20 ) ) ){
          ans = "Weird";
        }
        else{
            ans = "Not Weird";
           //Complete the code

        }
        System.out.println(ans);

    }
}
