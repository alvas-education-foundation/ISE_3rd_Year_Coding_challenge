import java.util.*;
public class MK {

    public static int difference(int arr[][], int n)
    {
        int d1 = 0, d2 = 0;

        for (int i = 0; i < n; i++)
        {
            d1 += arr[i][i];
            d2 += arr[i][n-i-1];
        }
        return Math.abs(d1 - d2);
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value of n");
        int n = sc.nextInt();
        int arr[][] = new int[n][n];
        System.out.println("Enter the array elements");
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n; j++)
            {
                arr[i][j] = sc.nextInt();
            }
        }
        System.out.print(difference(arr, n));
    }
}