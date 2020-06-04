import java.util.*;
import java.lang.*;
public class MK {
    static int median(int a[],
                      int l, int r)
    {
        int n = r - l + 1;
        n = (n + 1) / 2 - 1;
        return n + l;
    }
    static int IQR(int [] a, int n)
    {
        Arrays.sort(a);
        int mid_index = median(a, 0, n);
        int Q1 = a[median(a, 0,
                mid_index)];
        int Q3 = a[mid_index + median(a,
                mid_index + 1, n)];
        return (Q3 - Q1);
    }
    public static void main (String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; i++)
            a[i] = sc.nextInt();
        System.out.println(IQR(a, n));
    }
}


