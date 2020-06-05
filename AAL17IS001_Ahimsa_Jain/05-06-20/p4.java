4.You are going from City A to City B. The distance between A and B is  km. In the most days, you can go at most  km one day. But there are  exceptions, in the  th day, you can go at most  km. You need to find out the minimum number of days required to reach city  from city . 

Input Format
First line contains three integers, .

The  th line contains two integers .

It's guaranteed any two  are different. Note that  is not sorted.

Output Format
One integer represents the answer.

SAMPLE INPUT 
21 5 2
2 4
4 8
SAMPLE OUTPUT 
4
import java.io.BufferedReader;

import java.io.InputStreamReader;

import java.util.StringTokenizer;

class TestClass {

public static void main(String args[] ) throws Exception {

BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

StringTokenizer st = new StringTokenizer(br.readLine());

int dis = Integer.parseInt(st.nextToken());

int discover = Integer.parseInt(st.nextToken());

int ex = Integer.parseInt(st.nextToken());

int[] arr1 = new int[ex];

int[] arr2 = new int[ex];

for(int i=0; i<ex; i++) {

st = new StringTokenizer(br.readLine());

arr1[i] = Integer.parseInt(st.nextToken());

arr2[i] = Integer.parseInt(st.nextToken());

}

//Bubble sort for make sure we have ascending order on the daycount

for(int i=0; i<ex; i++) {

for(int j=0; j<ex-i-1; j++) {

if(arr1[j]>arr1[j+1]) {

int tmp = arr1[j];

arr1[j] = arr1[j+1];

arr1[j+1] = tmp;

tmp = arr2[j];

arr2[j] = arr2[j+1];

arr2[j+1] = tmp;

}

}

}

int sumdis = 0;

int daycount = 0;

int i = 0;

while(sumdis<dis) {

daycount++;

if(i<ex && arr1[i]==daycount) {

sumdis += arr2[i];

i++;

}

else {

sumdis += discover;

}

}

System.out.println(daycount);

}

}


 