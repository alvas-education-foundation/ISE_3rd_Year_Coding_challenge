/*2. Given an integer, N , print its first  10 multiples. Each multiple N (where 1<=i<=10) should be printed on a new line in the form: N x i = result.
Input Format
A single integer, .
Constraints
•	2<=N<=20	*/

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {


    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int N = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        for(int i=1;i<=10;i++)
        {
          int  mul=N*i;
                        System.out.printf("%d x %d = %d\n",N,i,mul);
        }
        scanner.close();
    }
}

