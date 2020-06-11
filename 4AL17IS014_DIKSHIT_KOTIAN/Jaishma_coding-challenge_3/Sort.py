import operator
l=[]
def s(l,col):
    for j in reversed(col):
        if(j==2):
            l=sorted(l,key=operator.itemgetter(j),reverse=True)
        else:
            l=sorted(l,key=operator.itemgetter(j))
    return l

n=int(input())
for i in range(n):
    m=[]
    m.append(int(input()))
    m.append(input())
    m.append(float(input()))
    l.append(m)
for i in s(l,(2,1,0)): 
    print(i)