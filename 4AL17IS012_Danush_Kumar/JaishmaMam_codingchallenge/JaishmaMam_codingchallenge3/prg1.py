''' Code to check a String is palindrome or not? '''

def isPalindrome(str):
	rev=''.join(reversed(str))
	if(rev==str):
		print("yes")
	else:
		print("no")

str=input()
ans=isPalindrome(str)