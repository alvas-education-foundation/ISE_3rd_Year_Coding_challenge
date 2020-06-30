Activity 4:
Given an array, , of size  distinct elements, sort the array in ascending order using the Bubble Sort algorithm above. Once sorted, print the following  lines:
1.Array is sorted in numSwaps swaps. where numofswaps is the number of swaps that took place.
2.First Element: firstElement where firstElement  is the first element in the sorted array.
3.Last Element: lastElement, where lastElement is the last element in the sorted array.
Input Format
The first line contains an integer, n, denoting the number of elements in array A.
The second line contains n space-separated integers describing the respective values of A={a1, a2,......an} .
Constraints
N={2 to 600}
Ai={1 to 2*106}, where i={0 to n}.
Output Format
Print the following three lines of output:
1.Array is sorted in numSwaps swaps. where numSwaps is the number of swaps that took place.
2.First Element: firstElement, where firstElement is the first element in the sorted array.
3.Last Element: lastElement, where lastElement is the last element in the sorted array.


import java.io.*;
import java.util.*;
public class Solution {
        public static void bubbleSort(int[] x, int n){
        
        int endPosition = x.length – 1;
        int swapPosition;
        int numSwap = 0;
            
        while( endPosition > 0 ){
            swapPosition = 0;
            
            for(int i = 0; i < endPosition; i++){
                
                if( x[i] > x[i + 1] ){
                    // Swap elements ‘i’ and ‘i + 1’:
                    int tmp = x[i];
                    x[i] = x[i + 1];
                    x[i + 1] = tmp;
                    
                    swapPosition = i;
                    numSwap++;
                } // end if
            } // end for
            endPosition = swapPosition;
        } // end while
        
        System.out.println(“Array is sorted in “ + numSwap + ” swaps.”);
        System.out.println(“First Element: “ + x[0]);
        System.out.println(“Last Element: “ + x[n–1]);
    } // end bubbleSort
    
    
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for(int i = 0; i< n; i++) {
            a[i] = sc.nextInt();
        }
        sc.close();
        bubbleSort(a, n);
    }
}