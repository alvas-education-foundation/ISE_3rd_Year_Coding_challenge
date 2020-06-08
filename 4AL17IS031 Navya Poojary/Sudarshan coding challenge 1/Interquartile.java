
4) The interquartile range of an array is the difference between its first (Q1) and third (Q3) quartiles. Given an array,X, of  n integers and an array, F, representing the respective frequencies of X's elements, construct a data set,S, where each  occurs at frequency f. Then calculate and print S's interquartile range, rounded to a scale of  
1 decimal place.

SOLUTION:

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

import java.util.Scanner;
import java.util.Arrays;

public class Solution {

    public static void main(String[] args) {
        /* Read and save input */
        Scanner scan = new Scanner(System.in);
        int size = scan.nextInt();
        int [] element = new int[size];
        int [] frequency = new int[size];
        for (int i = 0; i < size; i++) {
            element[i] = scan.nextInt();
        }
        
        int numElements = 0;
        for (int i = 0; i < size; i++) {
            frequency[i] = scan.nextInt();
            numElements += frequency[i];
        }
        
        /* Create and sort our data set */
        int [] data = new int[numElements];
        int dataIndex = 0;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < frequency[i]; j++) {
                data[dataIndex] = element[i];
                dataIndex++;
            }
        }
        Arrays.sort(data);
        
        /* Works with both even and odd length arrays */
        double q1 = findMedian(data, 0, data.length / 2 - 1);
        double q3 = findMedian(data, (data.length + 1) / 2, data.length - 1);
        
        System.out.println(q3 - q1);
    }
    
    /* Treats elements from "start" to "end" as an array and calculates its median */
    private static double findMedian(int [] array, int start, int end) {
        if ((end - start) % 2 == 0) { // odd number of elements
            return (array[(end + start) / 2]);
        } else { // even number of elements
            int value1 = array[(end + start) / 2];
            int value2 = array[(end + start) / 2 + 1];
            return (value1 + value2) / 2.0;
        }
    }
}