n = int(input())
m = int(input())

mat1 =[[0 for j in range(0,m)] for i in range(0,n)]
mat2=[[0 for j in range(0,m)] for i in range(0,n)]
res =[[0 for j in range(0,m)] for i in range(0,n)]

for i in range(0,n):
    for j in range(0,m):
        mat1[i][j] = int(input("Enter Mat1 Elements: "))

for i in range(0,n):
    for j in range(0,m):
        mat1[i][j] = int(input("Enter Mat2 Elements: "))

for i in range(0,n):
   for j in range(0,m):
    for k in range(0,n):
        res[i][j] += mat1[i][k]+mat2[i][k]


print(res)         