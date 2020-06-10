l=[]
n=int(input())
for i in range(n):
    l.append(int(input()))
print(len(l))
while(1):
    count=0
    short=min(l)
    for i in range(len(l)):
        if(l[i]!=999):
            l[i]=l[i]-short
            if(l[i]<=0):
                l[i]=999
    for i in l:
        if(i!=999):
            count=count+1
    if(count==0):
        break
    else:
        print(count)
        