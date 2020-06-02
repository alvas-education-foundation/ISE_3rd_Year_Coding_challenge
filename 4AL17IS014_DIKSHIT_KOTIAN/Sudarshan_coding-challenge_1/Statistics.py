import statistics
l=[]
n=int(input())
for i in range(n):
    data =int(input())
    l.append(data)
mean=sum(l)/len(l)
median=sorted(l)[len(l)//2]
mode=max(l,key=l.count)
print(mean)
print(median)
print(mode)