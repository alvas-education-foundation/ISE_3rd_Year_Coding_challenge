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
        System.out.println("Enter any element from array");
        int elem = sc.nextInt();
        for(int i = 0; i < arr.length; i++)
        {
            if(elem == arr[i]){
                System.out.println(arr[i]+" is at position "+i);
                count++;
                break;
            }
        }
        if(count==0)
            System.out.println("Element is not in the array");

    }

}
