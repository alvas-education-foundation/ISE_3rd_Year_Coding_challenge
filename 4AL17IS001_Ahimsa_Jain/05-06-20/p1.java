1.This time your task is simple.

Given two integers X and K, find the largest number that can be formed by changing digits at atmost K places in the number X.

Input:

First line of the input contains two integers X and K separated by a single space.

Output:

Print the largest number formed in a single line.

Constraints:


SAMPLE INPUT 
4483 2
SAMPLE OUTPUT 
9983

import java.io.BufferedReader;

import java.io.InputStreamReader;

import java.io.IOException;

import java.util.StringTokenizer;

public class Solution {

public static BufferedReader br;

public static void main(String[] args) throws IOException{

br = new BufferedReader(new InputStreamReader(System.in));

StringTokenizer st = new StringTokenizer(br.readLine());

String s = st.nextToken();

int k = Integer.parseInt(st.nextToken());

StringBuilder st1 = new StringBuilder(s);

for(int i=0; i<k; i++) {

if(st1.charAt(i)=='9') {

k++;

continue;

}

st1.deleteCharAt(i);

st1.insert(i,'9');

}

System.out.println(st1.toString());

}

}