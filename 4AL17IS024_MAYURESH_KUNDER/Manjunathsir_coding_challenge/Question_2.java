import java.util.*;
public class Main {
    public  static  void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        if (number % 2 == 0)
        {
            number = number / 2;
            number = 2 * (number - 1);
            System.out.println(number/2);
        }
        else
        {
            number = (number/2) + 1;
            number = 2 * (number -1);
            System.out.println(number);
        }

    }
}