public class Main 
{
    public static void main(String[] args) 
    {
        String sentence = " how to do in java ";
        System.out.println("Original sentence: " + sentence);
 
        sentence = sentence.replaceAll("\\s+", "");
 
        System.out.println("After replacement: " + sentence);
    }
}