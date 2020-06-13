TASK 2:
Using Regex, we can easily match or search for patterns in a text. Before searching for a pattern, we have to specify one using some well-defined syntax.
In this problem, you are given a pattern. You have to check whether the syntax of the given pattern is valid.
Input Format
The first line of input contains an integer N , denoting the number of test cases. The next N lines contain a string of any printable characters representing the pattern of a regex.
Output Format
For each test case, print Valid if the syntax of the given pattern is correct. Otherwise, print Invalid. Do not print the quotes.

SOLUTION:
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        /* Enter your code here. Print output to STDOUT. */
System.out.println( A.equals( new StringBuilder(A).reverse().toString())? "Yes" : "No" );

    }
}
