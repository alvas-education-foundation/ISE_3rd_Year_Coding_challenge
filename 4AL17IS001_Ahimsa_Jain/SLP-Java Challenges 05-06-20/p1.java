1.We are given 3 strings: str1, str2, and str3. Str3 is said to be a shuffle of str1 and str2 
if it can be formed by interleaving the characters of str1 and str2 in a way that maintains 
the left to right ordering of the characters from each string. 
For example, given str1="abc" and str2="def", str3="dabecf" is a valid shuffle since it preserves 
the character ordering of the two strings. So, given these 3 strings write a function that detects 
whether str3 is a valid shuffle of str1 and str2.

Program:

class Program
{
        static Boolean Check(String S1, String S2, String S3)
        {
            int i = 0, j = 0;

            for (int index = 0; index < S3.Length; index++)
            {
                if (i < S1.Length && S3[index] == S1[i])
                    i++;
                else if (j < S2.Length && S3[index] == S2[j])
                    j++;
                else 
	   return false;
            }
            return true;
        }

        static void Main(string[] args)
        {
            Console.WriteLine(Check("abcd","ddef","adbcddef"));
        }
 }