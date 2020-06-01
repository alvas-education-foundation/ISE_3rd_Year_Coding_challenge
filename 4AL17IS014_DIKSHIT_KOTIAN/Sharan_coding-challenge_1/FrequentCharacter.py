st=input()
m=0
ch='0'
count=0
for i in st:
    for j in st:
        if(i==j):
            count=count+1
    if(count>m):
        sm=m
        m=count
        sch=ch
        ch=i
    count=0
print(sch)