'''  ou are given a number of sticks of varying lengths. You will iteratively cut the sticks into smaller sticks, discarding the shortest pieces until there are none left. At each iteration you will determine the length of the shortest stick remaining, cut that length from each of the longer sticks and then discard all the pieces of that shortest length. When all the remaining sticks are the same length, they cannot be shortened so discard them. '''

n = int(input())
a =[[0 for j in range(0,n)] for i in range(0,n)]

for i in range(0,n):
    for j in range(0,n):
        a[i][j] = int(input("Enter Mat1 Elements: "))
sum1=0
sum2=0
for i in range(0,n):
    for j in range(0,n):
        if i == j:
            sum1 = sum1 + a[i][j]
        if i == n-j-1:    
            sum2 = sum2 + a[i][j]
print(abs(sum1-sum2))