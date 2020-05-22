/*
Question:-  Java Loops

Objective
In this challenge, we're going to use loops to help us do some simple math.

Task
Given an integer,N , print its first 10 multiples. Each multiple N*i (where 1<=i<=10 ) should be printed on a new line in the form: N x i = result.

Input Format:
A single integer, N.

Output Format:
Print 10 lines of output;in the form N x i = result.*/

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;
public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        for(int i = 1; i <= 10; i++){

            System.out.printf("%d x %d = %d%n", N, i, N*i);
        }
    }
}
