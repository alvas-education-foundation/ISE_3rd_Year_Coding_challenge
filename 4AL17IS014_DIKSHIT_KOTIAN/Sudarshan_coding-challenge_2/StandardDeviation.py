import math
l=[]
s=0
n=int(input())
for i in range(n):
    l.append(int(input()))
avg=sum(l)/n
for i in l:
    s=s+((i-avg)**2)
sd=math.sqrt(s/n)
print(round(sd,1))

