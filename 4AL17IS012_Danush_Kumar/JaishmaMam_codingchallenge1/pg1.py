'''Given an integer, N , print its first  10 multiples. Each multiple N (where 1<=i<=10) should be printed on a new line in the form: N x i = result.
Input Format
A single integer, .
Constraints
•	2<=N<=20
Output Format
Print  10 lines of output; each line i (where 1<=i<=10 ) contains the Nxi of  in the form:
N x i = result.
Sample Input
2
Sample Output
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
2 x 10 = 20'''


num=int(input())

for i in range(1,11)
	print(num,'x',i'=',num*i)
