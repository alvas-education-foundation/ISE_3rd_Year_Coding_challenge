import java.util.*;
import static java.lang.Math.*;
public class MK {

    void findRoots(int a, int b, int c)
    {
        if (a == 0)
        {
            System.out.println("Invalid");
            return;
        }

        int d  = b*b - 4*a*c;
        double sqrt_val = sqrt(abs(d));

        if (d > 0)
        {
            System.out.println("Roots are real and different \n");

            System.out.println((double)(-b + sqrt_val) / (2 * a) + "\n"
                    + (double)(-b - sqrt_val) / (2 * a));
        }
        else // d < 0
        {
            System.out.println("Roots are complex \n");

            System.out.println( -(double)b / ( 2 * a ) + " + i"
                    + sqrt_val + "\n"  + -(double)b / ( 2 * a )
                    + " - i" + sqrt_val);
        }
    }


    public static void main(String args[])
    {
        MK obj = new MK();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value of a");
        int a = sc.nextInt();
        System.out.println("Enter the value of b");
        int b = sc.nextInt();
        System.out.println("Enter the value of c");
        int c = sc.nextInt();
        obj.findRoots(a, b, c);
    }
}