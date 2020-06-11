import java.util.*;
public class MK {

    static int sum(int ar[], int n)
    {
        HashMap<Integer,
                Integer> mp = new HashMap<>();

        for (int i = 0; i < n; i++)
        {
            mp.put(ar[i], 0);
        }

        for (int i = 0; i < n; i++)
        {
            mp.put(ar[i], mp.get(ar[i]) + 1) ;
        }

        int sum = 0;

        for(Map.Entry p : mp.entrySet())
        {
            n -= (int)p.getValue();
            sum += n;
        }
        return sum;
    }

    public static void main (String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of sticks");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter lengths of different sticks");
        for(int i = 0; i < n; i++)
            arr[i] = sc.nextInt();
        int ans = sum(arr, n);
        System.out.println(ans);

    }
}