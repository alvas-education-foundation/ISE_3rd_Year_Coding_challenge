import java.util.*;
public class MK {
    static void multiply(int mat1[][],
                         int mat2[][], int res[][], int N)
    {
        int i, j, k;
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                res[i][j] = 0;
                for (k = 0; k < N; k++)
                    res[i][j] += mat1[i][k]
                            * mat2[k][j];
            }
        }
    }

    public static void main (String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value of N");
        int N = sc.nextInt();
        int mat1[][] = new int[N][N];
        int mat2[][] = new int[N][N];
        System.out.println("Enter the elements of first matrix");
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                mat1[i][j] = sc.nextInt();
            }
        }
        System.out.println("Enter the elements of second matrix");
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                mat2[i][j] = sc.nextInt();
            }
        }
        int res[][] = new int[N][N] ;
        int i, j;
        multiply(mat1, mat2, res, N);

        System.out.println("Result matrix"
                + " is ");
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
                System.out.print( res[i][j]
                        + " ");
            System.out.println();
        }
    }
}