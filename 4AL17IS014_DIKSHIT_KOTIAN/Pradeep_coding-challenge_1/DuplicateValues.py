l=[]
n=int(input())
for i in range(n):
    ele=int(input())
    l.append(ele)
for i in range(0,len(l)):
    for j in range(i,len(l)):
        if(i!=j):
            if(l[i]==l[j]):
                print("Duplicate of ",l[i],"is at index ",j)

