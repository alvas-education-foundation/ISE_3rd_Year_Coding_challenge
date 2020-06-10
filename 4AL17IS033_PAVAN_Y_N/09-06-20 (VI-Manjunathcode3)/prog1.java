public class prog1
{
    static void isBinaryOrNot(int number)
    {
        boolean isBinary = true;
 
        int copyOfNumber = number;
 
        while (copyOfNumber != 0)
        {
            int temp = copyOfNumber%10;   //Gives last digit of the number
 
            if(temp > 1)
            {
                isBinary = false;
                break;
            }
            else
            {
                copyOfNumber = copyOfNumber/10;    //Removes last digit from the number
            }
        }
 
        if (isBinary)
        {
            System.out.println(number+" is a binary number");
        }
        else
        {
            System.out.println(number+" is not a binary number");
        }
    }
 
    public static void main(String[] args)
    {
        isBinaryOrNot(128956);
 
        isBinaryOrNot((101110));
 
        isBinaryOrNot((42578));
 
        isBinaryOrNot((10110101));
    }
}