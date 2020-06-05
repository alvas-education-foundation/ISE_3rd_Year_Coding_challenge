1.{a,e,i,o,u,A,E,I,O,U}

Natural Language Understanding is the subdomain of Natural Language Processing where people used to design AI based applications have ability to understand the human languages. HashInclude Speech Processing team has a project named Virtual Assistant. For this project they appointed you as a data engineer (who has good knowledge of creating clean datasets by writing efficient code). As a data engineer your first task is to make vowel recognition dataset. In this task you have to find the presence of vowels in all possible substrings of the given string. For each given string you have to print the total number of vowels.

 

Input

First line contains an integer T, denoting the number of test cases.

Each of the next lines contains a string, string contains both lower case and upper case .

Output

Print the vowel sum
Answer for each test case should be printed in a new line.

Input Constraints

1<=T<=10

1<=|S|<=100000

 

 

SAMPLE INPUT 
1
baceb
SAMPLE OUTPUT 
16


import java.io.BufferedReader;

import java.io.InputStreamReader;

import java.io.IOException;

public class Solution {

public static BufferedReader br;

public static void main(String[] args) throws IOException{

br = new BufferedReader(new InputStreamReader(System.in));

int n = Integer.parseInt(br.readLine());

for(int i=0; i<n; i++) {

String s = br.readLine();

long count = 0;

for(int j=0; j<s.length(); j++) {

if(s.charAt(j)=='a' || s.charAt(j)=='e' || s.charAt(j)=='i' || s.charAt(j)=='o' || s.charAt(j)=='u' || s.charAt(j)=='A' || s.charAt(j)=='E' || s.charAt(j)=='I' || s.charAt(j)=='O' || s.charAt(j)=='U') {

count += (long)(s.length()-j)*(j+1);

}

}

System.out.println(count);

}

}

}