3.Mr. ABC was recently learning about computer division. Considering the basic model of the computer suppose we wish to divide a number X by D i.e X/D and obtain the result (Note that it is integer division i.e result of 7/2 will be 3).

Now the computer will give the divide overflow error if:

The number of bits in the binary representation(without appending any leading zeroes) of the resulting number(quotient) is greater than the number of bits in the binary representation of divisor(D) (Without appending any leading zeroes).

Now Mr. ABC is given an integer X for T testcases .He wishes to find number of such divisors D(1<=D<=X) for which divide overflow will not occur.

CONSTRAINTS :



INPUT:

The first line contains the integer T , the number of test cases.

In next T lines, each line contains an integer X.

OUTPUT: 

Print the required output for each testcase in new line. 

SAMPLE INPUT 
2
3
5
SAMPLE OUTPUT 
2
4


import math

t=int(input())

for j in range(t):

n=int(input())

i=1

while(i<=math.sqrt(n)):

i=i*2

if(n/i>=i/2):

ans=n-n/i

else:

ans=(n-(i/2))+1

print(ans)