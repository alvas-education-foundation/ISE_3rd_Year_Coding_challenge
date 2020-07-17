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