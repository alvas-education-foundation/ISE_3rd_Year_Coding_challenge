5.As a beginner to the programming, Mishki came to Hackerearth platform, to become a better programmer. She solved some problems and felt very confident. Later being a fan of Hackerearth, she gave a problem to her friends to solve. They will be given a string containing only lower case characters (a-z), and they need to find that by using the characters of the given string, how many times they can print "hackerearth"(without quotes). As they are new to programming world, please help them.

Input:
The first line will consists of one integer N denoting the length of string.
Next line will contain the string  containing only lower case characters.

Output:
Print one integer, denoting the number of times her friends can print "hackerearth" (without quotes).

Constraints:

Each character of string  will be in range 
SAMPLE INPUT 
13
aahkcreeatrha
SAMPLE OUTPUT 
1


n=int(input())

s=input()

l=list(s)

m=[]

x=['h','a','c','k','e','r','t']

for i in x:

a=l.count(i)

m.append(a)

m[0]=m[0]//2

m[1]=m[1]//2

m[4]=m[4]//2

m[5]=m[5]//2

print(min(m))

