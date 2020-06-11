''' Find the row with maximum number of 1s?'''


def maxRow(l): 
     result = list(map(sum,l)) 
     print (result.index(max(result)))

l=[]
m=int(input())
n=int(input())
for i in range(m):
    col=[]
    for j in range(n):
        e=int(input())
        col.append(e)
    l.append(col)
maxRow(l)