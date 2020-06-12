l=[]
s1,s2=0,0
n=int(input())
for i in range(n):
    m=[]
    for j in range(n):
        m.append(int(input()))
    l.append(m)
for i in range(n):
    for j in range(n):
        if(i==j):
            s1=s1+l[i][j]
        if(i+j==(n-1)):
            s2=s2+l[i][j]
diff=abs(s2-s1)
print(diff)