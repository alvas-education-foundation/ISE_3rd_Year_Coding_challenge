2.Problem Description

Given a series of integer pairs  and , output the sum of  and .

Input Format

Each line contains two integers,  and . One input file may contain several pairs  where .

Output Format

Output a single integer per line - The sum of  and .

Constraints

SAMPLE INPUT 
1 2
2 5
10 14
SAMPLE OUTPUT 
3
7
24

import java.util.Scanner;

import java.math.BigInteger;

public class Solution {

public static Scanner in;

public static void main(String[] args) {

in = new Scanner(System.in);

while(in.hasNextLine()) {

BigInteger bg1 = new BigInteger(in.next());

BigInteger bg2 = new BigInteger(in.next());

System.out.println(bg1.add(bg2));

}

}

}