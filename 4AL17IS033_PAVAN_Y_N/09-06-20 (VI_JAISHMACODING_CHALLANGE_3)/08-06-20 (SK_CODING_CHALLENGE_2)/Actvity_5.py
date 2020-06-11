li=[]
n = int(input())
for i in range(0,n):
    ele = int(input())
    li.append(ele)
k = int(input())

nP= 0
for i in range(n):
    for j in range(i+1,n):
        sum = li[i]+li[j]
        if sum % k == 0:
            nP+=1
print(nP)
