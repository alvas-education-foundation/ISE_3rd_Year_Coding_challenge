import java.util.*;
public class MK {

    static int maxCount(int n,int a[])
    {
        HashMap<Integer, Integer> freq = new HashMap<>();

        for(int i = 0; i < n; ++i)
        {
            if(freq.containsKey(a[i]))
                freq.put(a[i], freq.get(a[i]) + 1);
            else
                freq.put(a[i], 1);
        }

        int ans = 0;

        for (Integer key : freq.keySet())
        {
            if(freq.containsKey(key+1))
                ans = Math.max(ans, freq.get(key) + freq.get(key+1));
        }

        return ans;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter the array elements");
        for(int i = 0; i < n; i++)
            arr[i] = sc.nextInt();
        System.out.println(maxCount(n,arr));
    }
}