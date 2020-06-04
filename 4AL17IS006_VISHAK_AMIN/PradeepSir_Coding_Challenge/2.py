n = int(input())
l =[]
unq={}
dup=[]
for i in range(0,n):
    new = int(input())
    l.append(new)
for x in l:
    if x not in unq:
        unq[x]=1
    else:
        if unq[x] == 1:
            dup.append(x)
        unq[x] += 1
print(dup)        

    