TASK 1:
Given a string  A, print Yes if it is a palindrome, print No otherwise.
Constraints
• A will consist at most  50 lower case english letters.
Sample Input
madam
Sample Output
Yes

SOLUTION:
import java.util.*;
class PalindromeString{
	public static void main(String args[]){
		String str1,str2= "";
		Scanner in = new Scanner(System.in);
		System.out.println("Enter the string");
		str1= in.nextLine();
		   System.out.println(str1);
		int length = str1.length();
		for ( int i = length - 1; i >= 0; i-- ){
			str2 = str2 + str1.charAt(i);
		}
		if (str1.equals(str2)){
			System.out.println("Yes.");
		}
		else{
			System.out.println("No.");
		}
	}	
}