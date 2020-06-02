/*The challenge here is to read  lines of input until you reach EOF, then number and print all  lines of content.*/

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
   for(int i = 1; scan.hasNext()== true; i++){
       System.out.println(i + " " + scan.nextLine());
   }
    }
}
