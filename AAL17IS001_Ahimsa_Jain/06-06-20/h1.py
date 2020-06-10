1.There are   number of girls and they rolled a dice in turns one after another.

If the number on the dice is , then the dice will be rolled again until she get a number other than .

Since you know the sequence of numbers which the dice shows when rolled each time, you have to find what is the total number of girls or if the sequence is invalid.

Input format

A single line that contains a string   denoting the sequence of numbers the dice rolls on written as string.

Output format

If the sequence is valid print the number of girls  
If the sequence is invalid print 
SAMPLE INPUT 
3662123
SAMPLE OUTPUT 
5


my code in python 3:

s=input()

l=list(s)

c=0

if(l[-1]=='6'):

print('-1')

else:

for i in l:

if(i!='6'):

c+=1

else:

c+=0

print(c)