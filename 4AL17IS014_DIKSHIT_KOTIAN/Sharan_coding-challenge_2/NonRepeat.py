str1=input()
l=[]
for i in range(len(str1)):
    for j in range(len(str1)):
        if(i!=j):
            if(str1[i]==str1[j]):
                l.append(str1[i])
                break
m=[]
for i in str1:
    if i not in l:
        m.append(i)
print(m[0])


