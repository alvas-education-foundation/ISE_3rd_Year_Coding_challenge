import java.util.Scanner;

public class one {

    public static void main(String[] args) {
            Scanner x=new Scanner(System.in);
            System.out.println("================================");
            for(int i=0;i<3;i++){
                String s1=x.next();
                int y=x.nextInt();
                System.out.printf("%-14s %03d\n", s1, y);
            }
            System.out.println("================================");

    }
}