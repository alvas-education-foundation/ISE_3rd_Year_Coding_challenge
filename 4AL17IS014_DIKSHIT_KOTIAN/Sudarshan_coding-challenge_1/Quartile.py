n = int(input())
l=[]
for i in range(n):
    e=int(input())
    l.append(e)
x=sorted(l)
from statistics import median
print(int(median(x[:n//2])))
print(int(median(x)))
print(int(median(x[(n+1)//2:])))