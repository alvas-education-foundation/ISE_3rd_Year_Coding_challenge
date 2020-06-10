3.You like the sound of rain only if the sound ranges from  to  units. Every cloud makes  unit of sound. Determine the minimum and the maximum number of clouds that can produce the sound in the provided range.

Input format

First line: One integer  denoting the number of test cases
Next  lines: Three integers  and  denoting the provided range of the rain sound and the units of sound produced by each cloud
Output format

In  lines, print two space-separated integers that represent the minimum and the maximum number of the clouds that can produce the sound in the provided range.

Note: Print  if no answer is available.

Constraints


SAMPLE INPUT 
3
5 10 3
7 12 4
50 60 1
SAMPLE OUTPUT 
2 3
2 3
50 60

import java.io.BufferedReader;

import java.io.InputStreamReader;

import java.util.StringTokenizer;

class TestClass {

public static void main(String args[] ) throws Exception {

BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

int a = Integer.parseInt(br.readLine());

for(int a0=0; a0<a; a0++) {

StringTokenizer st = new StringTokenizer(br.readLine());

int s = Integer.parseInt(st.nextToken());

int e = Integer.parseInt(st.nextToken());

int cu = Integer.parseInt(st.nextToken());

s = (s-1)/cu+1;

e = e/cu;

if(s>e) System.out.println("-1 -1");

else

System.out.println(s+" "+e);

}


 

}

}

