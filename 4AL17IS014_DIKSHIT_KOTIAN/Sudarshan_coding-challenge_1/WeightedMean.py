l=[]
w=[]
sum1=0
n=int(input())
for i in range(n):
    l1=int(input())
    w1=int(input())
    l.append(l1)
    w.append(w1)
for i in range(n):
    sum1=sum1+(l[i]*w[i])
sum2=sum(w)
mean=sum1/sum2
print(round(mean,2))