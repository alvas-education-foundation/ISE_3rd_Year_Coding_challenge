import java.util.*;
public class MK {

    public static int countKdivPairs(int A[], int n, int K)
    {
        int freq[] = new int[K];
        for (int i = 0; i < n; i++)
            ++freq[A[i] % K];
        int sum = freq[0] * (freq[0] - 1) / 2;
        for (int i = 1; i <= K / 2 && i != (K - i); i++)
            sum += freq[i] * freq[K - i];
        if (K % 2 == 0)
            sum += (freq[K / 2] * (freq[K / 2] - 1) / 2);
        return sum;
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of array");
        int a = sc.nextInt();
        int A[] = new int[a];
        System.out.println("Enter the elements of array");
        for(int i = 0; i < a; i++)
            A[i] = sc.nextInt();
        System.out.println("Enter the value of K");
        int K = sc.nextInt();
        System.out.print(countKdivPairs(A, a, K));
    }
}