1. Write a Program in Java to check whether a number is an Armstrong Number or not. 
SAMPLE OUTPUT:

Input an integer:  153
Is Armstrong number? True

SOLUTION:

import java.util.Scanner;
public class JavaExample {

    public static void main(String[] args) 
    {
        int num , number, temp, total = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Input an integer: ");
        num = sc.nextInt();
       

        number = num;
        while (number != 0)
        {
            temp = number % 10;
            total = total + temp*temp*temp;
            number /= 10;
        }

        if(total == num)
             System.out.println(" Is an Armstrong number? True");
        else
            System.out.println(" Is not an Armstrong number?False");
            sc.close();
    }
}



