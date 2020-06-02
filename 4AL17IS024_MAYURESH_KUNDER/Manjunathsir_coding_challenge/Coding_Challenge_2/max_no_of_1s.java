import java.util.*;
import java.lang.*;
public class MK {
    public static void main (String[] args){
        Scanner sc = new Scanner(System.in);
        int count = 0,max = 0,row = 0;
        System.out.println("Enter the number of rows and columns");
        int m = sc.nextInt();
        int n = sc.nextInt();
        int[][] arr = new int[m][n];
        System.out.println("Enter the elements");
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                arr[i][j] = sc.nextInt();
            }
        }
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(arr[i][j]==1)
                    count++;
            }
            if(count>max)
            {
                max = count;
                row = i;
            }
            count = 0;
        }
        System.out.println(row+" row has maximum number of 1s which is: "+max);

    }

}


