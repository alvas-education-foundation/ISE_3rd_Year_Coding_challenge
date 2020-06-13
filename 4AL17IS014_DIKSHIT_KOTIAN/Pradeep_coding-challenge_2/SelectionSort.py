n=int(input())
l=[]
for i in range(n):
    ele=int(input())
    l.append(ele)

for i in range(n): 
    min1=i 
    for j in range(i+1,n): 
        if l[min1] > l[j]: 
            min1=j         
    l[i],l[min1]=l[min1],l[i]

print(l)