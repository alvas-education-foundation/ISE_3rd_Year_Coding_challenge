import java.util.*;
public class MK {

    public static void series(int n, int d)
    {

        if (d == 0) {
            for (int i = 0; i < n; i++)
                System.out.print("0 ");
            System.out.println();
            return;
        }

        if (n % 2 == 0) {
            for (int i = 1; i <= n; i++) {
                System.out.print(Math.pow(-1, i) * d + " ");
            }
            System.out.println();
        }
        else
        {
            float m = n;
            float r = (m / (m - 1));
            float g = (float)(d * (float)(Math.sqrt(r)));
            System.out.print("0 ");
            for (int i = 1; i < n; i++) {
                System.out.print(Math.pow(-1, i) * g + " ");
            }
            System.out.println();
        }
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value of n");
        int n = sc.nextInt();
        System.out.println("Enter the value of d");
        int d = sc.nextInt();
        series(n, d);
    }
}