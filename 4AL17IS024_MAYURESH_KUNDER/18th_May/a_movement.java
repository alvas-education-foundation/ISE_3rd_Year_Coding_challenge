import java.util.*;
import java.io.*;

class TestClass {
    public static void main(String args[] ) throws Exception {
       
       Scanner sc = new Scanner(System.in);

       int input = sc.nextInt();

       int steps = 0;

       while(input>=1)
       {
           if(input>=5)
           {
                input = input-5; 
                steps++;
           }
           else if(input>=4)
           {
               input = input-4;
               steps++;
           }
           else if(input>=3)
           {
               input = input-4;
               steps++;
           }
           else if(input>=2)
           {
               input = input-4;
               steps++;
           }
           else
           {
               input = input-1;
               steps++;
           }
       }

       System.out.println(steps);

    }
}
