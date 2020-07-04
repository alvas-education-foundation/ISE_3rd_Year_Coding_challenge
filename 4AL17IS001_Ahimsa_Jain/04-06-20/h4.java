4.You are given a rectangle of length  and width . You are required to determine a circle that contains the maximum circumference that fits inside the rectangle. This type of circle is called a big circle. Your task is to determine the maximum number of big circles that can fit inside the rectangle. 

Input format

First line: An integer  denoting the number of test cases
First line of each test case: Integers  and 
Output format

For each test case, print the answer on a new line denoting the maximum number of big circles that can fit in the provided rectangle.  

Constraints


SAMPLE INPUT 
1
40 10
SAMPLE OUTPUT 
4

import java.io.BufferedReader;

import java.io.InputStreamReader;

import java.util.StringTokenizer;

public class TestClass {

public static void main(String args[] ) throws Exception {

BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

int l = Integer.parseInt(br.readLine());

for(int a0=0; a0<l; a0++) {

StringTokenizer st = new StringTokenizer(br.readLine());

int a = Integer.parseInt(st.nextToken());

int b = Integer.parseInt(st.nextToken());

if(a>b) {

System.out.println(a/b);

}

else {

System.out.println(b/a);

}

}

}

}