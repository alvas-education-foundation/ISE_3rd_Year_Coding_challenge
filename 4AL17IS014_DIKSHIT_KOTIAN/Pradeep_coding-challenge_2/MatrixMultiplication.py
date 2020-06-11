a=[]
b=[]
c=[]
m1=int(input())
n1=int(input())
m2=int(input())
n2=int(input())
if(n1==m2):
    for i in range(m1):
        l=[]
        for j in range(n2):
            ele=0
            l.append(ele)
        c.append(l)
    for i in range(m1):
        l=[]
        for j in range(n1):
            ele=int(input())
            l.append(ele)
            c[i][j]=0
        a.append(l)

    for i in range(m2):
        k=[]
        for j in range(n2):
            ele=int(input())
            k.append(ele)
        b.append(k)
    for i in range(m1):
        for j in range(n2):
            for k in range(m2):
                c[i][j] += a[i][k] * b[k][j]

    print(c)