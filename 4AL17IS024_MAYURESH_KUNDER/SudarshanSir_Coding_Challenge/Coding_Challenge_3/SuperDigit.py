/*Activity 2:
Given an integer, and find the super digit of the integer.
If x has only 1 digit, then its super digit is x.
Otherwise, the super digit of x is equal to the super digit of the sum of the digits of x.
You are given two numbers n  and k. The number p  is created by concatenating the string n*k   times.
The superDigit has the following parameter(s):
n: a string representation of an integer
k: an integer, the times to concatenate n to make p

Input Format:
The first line contains two space separated integers,n  and p.

Output Format:
Return the super digit of p.*/


n, k = map(int, input().split())
x = n * k % 9
print(x if x else 9)