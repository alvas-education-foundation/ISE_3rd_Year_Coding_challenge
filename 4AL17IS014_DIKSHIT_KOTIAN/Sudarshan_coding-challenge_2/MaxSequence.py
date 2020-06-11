l=[]
count=0
m=0
n=int(input())
for i in range(n):
    l.append(int(input()))
l.sort()
for i in range(n-1):
    for j in range((i+1),n):
        if(abs(l[i]-l[j])<=1):
          count=count+1
    if(count>m):
        m=count
    count=0
print(m+1)