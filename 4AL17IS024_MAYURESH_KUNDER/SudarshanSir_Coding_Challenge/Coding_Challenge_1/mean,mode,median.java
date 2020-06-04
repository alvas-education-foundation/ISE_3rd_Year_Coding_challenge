import java.util.*;
import java.lang.*;
public class MK {
    public static double mean(double a[]){
        double sum = 0,avg = 0;
        for(int i = 0; i < a.length; i++)
        {
            sum += a[i];
        }
        avg = sum/a.length;
        return (avg);
    }
    public static double median(double a[]){
        Arrays.sort(a);
        int mid = a.length/2;
        double med = 0;
        if(a.length%2 == 1)
             med = a[mid];
        else
             med = (a[mid-1]+a[mid])/2;
        return med;
    }
    public static  double mode(double a[]){
        double maxValue = 0, maxCount = 0;

        for (int i = 0; i < a.length; ++i) {
            int count = 0;
            for (int j = 0; j < a.length; ++j) {
                if (a[j] == a[i])
                    ++count;
            }

            if (count > maxCount) {
                maxCount = count;
                maxValue = a[i];
            }
        }
        return maxValue;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        double[] a;
        System.out.println("Enter the number of elements to be entered");
        int size = sc.nextInt();
        a = new double[size];
        for(int i = 0; i < size; i++)
        {
            a[i] = sc.nextDouble();
        }
        System.out.println("The Mean of the given array is: "+mean(a));
        System.out.println("The median of the given array is: "+median(a));
        System.out.println("The mode of the given array is: "+mode(a));

    }
}


