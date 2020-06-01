2) Write a Java program to find the duplicate values of an array of integer values.

solution:

public class DuplicatesArray
{   
        public static void main(String[] args)
        {
                String[] strArray = {"ab", "bc", "cd", "de", "ef", "bc", "de"};
                System.out.println("Given array elements are: ");
                for (int i = 0; i < strArray.length-1; i++)
                {
                        System.out.print(strArray[i]+" ");
                }
                System.out.println("\n========================");
                for (int i = 0; i < strArray.length-1; i++)
                {
                        for (int j = i+1; j < strArray.length; j++)
                        {
                                if( (strArray[i].equals(strArray[j])) && (i != j) )
                                {
                                        System.out.println("\nDuplicate Element is : "+strArray[j]);
                                }
                        }
                }
        }    
} 