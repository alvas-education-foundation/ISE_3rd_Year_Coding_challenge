import java.util.*;
import java.*;

class TestClass {
    public static void main(String args[] ) throws Exception {
       Scanner s = new Scanner(System.in);
       long t = s.nextLong();
       long y = 0;
       long z = 7; 
       for(int i = 0; i<t; i++)
       {
           long floor = s.nextLong();
           if(((y+z)/2)==floor)
           {
               y = floor;
               System.out.println("A");
           }
           else if(((y+z)/2)<floor)
           {
               z = floor;
                System.out.println("B");
           }
           else
           {
               y = floor;
                System.out.println("A");
           }

       }
    }
}
