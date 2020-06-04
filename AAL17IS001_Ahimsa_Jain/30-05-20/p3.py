You have been given an array A of size N consisting of positive integers. You need to find and print the product of all the number in this array.

Input Format:
The first line contains a single integer N denoting the size of the array. The next line contains N space separated integers denoting the elements of the array

Output Format:
Print a single integer denoting the product of all the elements of the array.

SAMPLE INPUT 
5
1 2 3 4 5
SAMPLE OUTPUT 
120

n=int(input())

l=list(map(int,input().split()))

x=1

for i in l:

    x*=i

print(x)