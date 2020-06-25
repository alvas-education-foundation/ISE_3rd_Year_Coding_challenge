/* TASK 2:
Write a java program to count occurrences of each character in String in java. If the String is  
"Java Hungry" then the answer should be
{ =1, a=2, r=1, u=1, v=1, g=1, H=1, y=1, J=1, n=1}*/

public class EachCharacterCountInString
{ 
 public static void main(String[] args)
    {
	characterCount("Java Hungry");
    }
 
 static void characterCount(String inputString)
    {
 
        HashMap<Character, Integer> eachCharCountMap = new HashMap<Character, Integer>();
 
        char[] charArray = inputString.toCharArray();
 
        for (char c : charArray)
        {
            if(eachCharCountMap.containsKey(c))
            {
                eachCharCountMap.put(c, eachCharCountMap.get(c)+1);
            }
            else
            {
                eachCharCountMap.put(c, 1);
            }
        }
System.out.println(eachCharCountMap);
    }
     
}

    © 2020 GitHub, Inc.
    Terms
