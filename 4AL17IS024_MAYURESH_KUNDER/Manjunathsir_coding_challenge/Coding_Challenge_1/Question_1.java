import java.util.*;
public class Main {
    public  static  void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            int num1 = sc.nextInt();
            int num2 = sc.nextInt();
            int sum = num1 + num2;
            System.out.println("sum = "+sum);
        }
        catch (Exception e) {
            System.out.println("error: the input is not a number");
        }

    }
}