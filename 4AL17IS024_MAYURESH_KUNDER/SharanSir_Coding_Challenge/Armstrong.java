import java.util.*;
import java.lang.*;
public class MK {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int input = sc.nextInt();
        int len = String.valueOf(input).length();
        int temp = input,rem = 0,sum = 0;
        while(temp>0)
        {
             rem = temp%10;
             sum += Math.pow(rem, len);
             temp /= 10;
        }
        if(input == sum)
        System.out.println("Yes");
        else
            System.out.println("No");
    }
}
