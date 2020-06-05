2)Given an array,A, of  N integers and an array, W, representing the respective weights of A's elements, calculate and print the weighted mean of A's elements. Your answer should be rounded to a scale of  decimal place

SOLUTION:
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
public class Solution {

public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] arr = new int[n];
    int[] warr = new int[n];
    for(int i=0; i<n;i++){
        arr[i] = sc.nextInt();
    }
    double wsum = 0.0;
    for(int i=0; i<n;i++){
        warr[i] = sc.nextInt();
        wsum += warr[i];
    }

    double wmean = 0.0;
    for(int i=0; i<n;i++){
        wmean += arr[i] * warr[i];   
    }
    wmean = wmean/wsum;
    System.out.printf("%.1f", wmean);
}
}