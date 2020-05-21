4.java end of file

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void Main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
   Scanner scan = new Scanner(System.in);
   for(int i = 1; scan.hasNext()== true; i++){
       System.out.println(i + " " + scan.nextLine());
   }
}

// While loop System
public static void main(String[] args) {
   Scanner scan = new Scanner(System.in);
   int i = 0;
   while(scan.hasNext()){
       i++;
       System.out.println(i + " " + scan.nextLine());
   }

    }
}