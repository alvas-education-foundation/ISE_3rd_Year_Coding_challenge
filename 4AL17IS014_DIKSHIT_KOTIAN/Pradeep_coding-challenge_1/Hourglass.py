l = []
for i in range(6):
   t = [int(j) for j in input().strip().split(' ')]
   l.append(t)
    
sum1= []

def calculate(i,j):
    return(l[i][j] + l[i][j+1] + l[i][j+2] + l[i+1][j+1] + l[i+2][j] + l[i+2][j+1] + l[i+2][j+2])

for j in range(0,4):
    for i in range(0,4):
        sums = calculate(i,j)
        sum1.append(sums)
print(max(sum1))