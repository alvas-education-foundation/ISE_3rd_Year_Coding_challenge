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
        for(int i = 0; i < arr.length; i++)
        {
            if(arr[i] == 0)
                count++;
        }
        for(int i = 0;i < arr.length; i++)
        {
            if(i < count)
                arr[i] = 0;
            else
                arr[i] = 1;
        }
        System.out.print("[ ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] +" ");
        }
        System.out.print("]");

    }

}
