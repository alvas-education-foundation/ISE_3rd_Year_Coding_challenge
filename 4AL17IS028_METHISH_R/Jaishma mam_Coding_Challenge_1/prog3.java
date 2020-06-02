import java.util.*;
import java.io.*;
class Main{
    public static void main(String []args)
    {
        Scanner s = new Scanner(System.in);
        int n=s.nextInt();
        for(int i=0;i<n;i++)
        {
            try
            {
                long x=s.nextLong();
                System.out.println(x+" can be fitted in:");
                if(x>=-128 && x<=127)
		  System.out.println("* byte");
                if(x >= -Math.pow(2, 15) && x <= Math.pow(2, 15) - 1)
                  System.out.println("* short");
            	if(x >= -Math.pow(2, 31) && x <= Math.pow(2, 31) - 1)
                  System.out.println("* int");
            	if(x >= -Math.pow(2, 63) && x <= Math.pow(2, 63) - 1)
                  System.out.println("* long");
            }
            catch(Exception e)
            {
                System.out.println(s.next()+" can't be fitted anywhere.");
            }

        }
    }
}