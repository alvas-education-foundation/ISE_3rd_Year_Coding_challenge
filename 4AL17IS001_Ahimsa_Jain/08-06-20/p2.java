2.wo strings  and  comprising of lower case English letters are compatible if they are equal or can be made equal by following this step any number of times:

Select a prefix from the string  (possibly empty), and increase the alphabetical value of all the characters in the prefix by the same valid amount. For example if the string is  and we select the prefix  then we can convert it to  by increasing the alphabetical value by 1. But if we select the prefix  then we cannot increase the alphabetical value.
Your task is to determine if given strings  and  are compatible.

Input format

First line: String  

Next line: String 

Output format

For each test case, print  if string  can be converted to string  , otherwise print .

Constraints


SAMPLE INPUT 
abaca
cdbda
SAMPLE OUTPUT 
YES

import java.util.*;class stringpass

{ public static void main(String args[] ) throws Exception

   {

Scanner s = new Scanner(System.in);

       String str1 = s.next();

       String str2 = s.next();

       

       int len = 0;

       if(str1.length() == str2.length()){

           for(int i=0;i<str1.length();i++){

               if(str1.charAt(i)>str2.charAt(i)){

                   len=1;

                   break;

               }

           }

           if(len==1){

               System.out.println("NO");

           }else{

               System.out.println("YES");

           }

       }else{

           System.out.println("NO");

       }}

}

 