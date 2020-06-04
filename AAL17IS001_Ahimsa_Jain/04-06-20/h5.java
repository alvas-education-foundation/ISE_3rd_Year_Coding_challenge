5.Gary likes to solve problems of array, but he doesn't like problems that involve queries. His school teacher gave him an assignment full of problems but one of them involve queries. Can you help Gary in solving that problem so that he can go and play with his friends? The problem is :

Given an Array A consisting of N positive integers, you have to answer Q queries on it. Queries can be of the two types: * 1 X Y - Update X at location Y in the array. * 2 L R - Print the sum of range [L, R], i.e. Both L and R are inclusive.

Note:- Array indexing is from 0.
Input:

    The first line contains two space separated integers N(Length of Array) and Q(Queries).
    Next Line contains N space separated integers denoting array A.
    Next Q Line contains 3 space separated integers for each line, as described above
Output: Answer to the each query of type 2 in a new line, only when range is valid, otherwise ouput `-1`

Constraints: 1 <= N <= 10^9 1 <= Q <= 10^5 1 <= A[i], X, Y, L, R <= 10^5

SAMPLE INPUT 
5 5
2 3 4 8 9
1 0 3
2 0 1
2 0 4
1 2 5
2 0 3
SAMPLE OUTPUT 
6
27
19

import java.io.*;

import java.util.*;

public class CandidateCode {

  public static BufferedReader br;

   public static void main(String[] args) throws IOException{

       br = new BufferedReader(new InputStreamReader(System.in));

       StringTokenizer st = new StringTokenizer(br.readLine());

       int n = Integer.parseInt(st.nextToken());

       int[] arr = new int[n];

       int k = Integer.parseInt(st.nextToken());

       st = new StringTokenizer(br.readLine());

       for(int i=0; i<n; i++) {

           arr[i] = Integer.parseInt(st.nextToken());

       }

       for(int i=0; i<k; i++) {

           st = new StringTokenizer(br.readLine());

           int num = Integer.parseInt(st.nextToken());

           if(num==1) {

               int ind = Integer.parseInt(st.nextToken());

               int chng = Integer.parseInt(st.nextToken());

               arr[ind] = chng;

           }

           else if(num==2) {

               int si = Integer.parseInt(st.nextToken());

               int ei = Integer.parseInt(st.nextToken());

               long sum = 0;

               for(int j=si; j<=ei; j++) {

                   sum += (long)arr[j];

               }

               System.out.println(sum);

           }

       }

   }

}