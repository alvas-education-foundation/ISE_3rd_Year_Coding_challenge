import java.util.*;

class TestClass {
    public static void main(String args[] ) throws Exception {
       Scanner s = new Scanner(System.in);
       long input = s.nextLong();
        for(int i = 1 ;  ; i++)
        {
            if((input - i) > 0)
            {
                input = input - i;
            }
            else
            {
                System.out.println("Patlu");
                break;
            }
            if((input - (i*2)) > 0)
            {
                input = input - (i*2);
            }
            else
            {
                System.out.println("Motu");
                break;
            }
        }
    }
}
