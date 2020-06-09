import java.util.*;
public class MK {
    static boolean isInterleaved (String A, String B, String C)
    {
        int i = 0, j = 0, k = 0;
        while (k != C.length())
        {
            if (i<A.length()&&A.charAt(i) == C.charAt(k))
                i++;
            else if (j<B.length()&&B.charAt(j) == C.charAt(k))
                j++;
            else
                return false;
            k++;
        }
        if (i < A.length() || j < B.length())
            return false;

        return true;
    }

    public static void main(String []args){

        Scanner sc = new Scanner(System.in);
        String A = sc.next();
        String B = sc.next();
        String C = sc.next();
        if (isInterleaved(A, B, C) == true)
            System.out.printf("%s is interleaved of %s and %s", C, A, B);
        else
            System.out.printf("%s is not interleaved of %s and %s", C, A, B);
    }
}