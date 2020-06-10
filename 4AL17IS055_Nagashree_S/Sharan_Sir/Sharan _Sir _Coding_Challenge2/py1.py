"""We are given 3 strings: str1, str2, and str3. Str3 is said to be a shuffle of str1 and str2 
if it can be formed by interleaving the characters of str1 and str2 in a way that maintains 
the left to right ordering of the characters from each string. 
For example, given str1="abc" and str2="def", str3="dabecf" is a valid shuffle since it preserves 
the character ordering of the two strings. So, given these 3 strings write a function that detects 
whether str3 is a valid shuffle of str1 and str2."""

*/shuffle = ""
def check(str1,str2,str3):
    shuffle =  str1+str2
    c1 = "".join(sorted(shuffle))
    c2 = "".join(sorted(str3))
    if c1 == c2:
        print("True")
    else:
        print("False")    

        
str1 = input()
str2 = input()
str3 = input()
check(str1,str2,str3)