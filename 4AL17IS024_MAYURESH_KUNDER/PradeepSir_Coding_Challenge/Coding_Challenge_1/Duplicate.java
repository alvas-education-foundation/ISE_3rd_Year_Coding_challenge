import java.util.*;
import java.lang.*;
public class MK {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr;
        int count = 0;
        System.out.println("Enter the size of the array");
        int size = sc.nextInt();
        arr = new int[size];
        System.out.println("Enter array elements");
        for (int i = 0; i < arr.length; i++)
            arr[i] = sc.nextInt();
        for (int i = 0; i < arr.length-1; i++)
        {
            for (int j = i+1; j < arr.length; j++)
            {
                if ((arr[i] == arr[j]))
                {
                    System.out.println("Duplicate Element : "+arr[j]);
                }
            }
        }

    }

}
