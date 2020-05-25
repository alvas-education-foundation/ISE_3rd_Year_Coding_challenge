import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int getWays(int[] squares, int d, int m){
        int max = 0, j = 0, count = 0, consecutive = 0;
        for ( int i : squares){
            max+=i;
            if( consecutive < m) consecutive++;
            
            if (consecutive == m){
                if(max == d ){
                    count++;
                }
                max-= squares[j];
                j++;
            }
            //System.out.println("MAX : " + max + " COUNT : " + count + " CONSECUTIVE: " + consecutive);
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] s = new int[n];
        for(int s_i=0; s_i < n; s_i++){
            s[s_i] = in.nextInt();
        }
        int d = in.nextInt();
        int m = in.nextInt();
        int result = getWays(s, d, m);
        System.out.println(result);
    }
}
