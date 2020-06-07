from statistics import median
n = int(input())
li = []

for i in range(n):
    ele = int(input())
    li.append(ele)
l = sorted(li)
print(int(median(l[:n//2])))
print(int(median(l)))
print(int(median(l[(n+1)//2:])))