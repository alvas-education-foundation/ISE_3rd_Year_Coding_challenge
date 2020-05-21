/*Static initialization blocks are executed when the class is loaded, and you can initialize static variables in those blocks.
It's time to test your knowledge of Static initialization blocks. You can read about it here.
You are given a class Solution with a main method. Complete the given code so that it outputs the area of a parallelogram with breadth  and height . You should read the variables from the standard input.
If  or  , the output should be "java.lang.Exception: Breadth and height must be positive" without quotes.*/

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
static boolean flag=true;
static Scanner in=new Scanner(System.in);
static int B=in.nextInt();
static int H=in.nextInt();
static
{
   
    if(B>0 && H>0)
        flag=true;
    else
    {
        flag=false;
        System.out.println("java.lang.Exception: Breadth and height must be positive");
    }
        
} 
//Write your code here
class rectangle{
    
}
public static void main(String[] args){
        if(flag){
            int area=B*H;
            System.out.print(area);
        }
        
    }//end of main

}//end of class
