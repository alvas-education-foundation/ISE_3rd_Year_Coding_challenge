n = int(input())
li =[]
count = 0
newseq = 0
for i in range(0,n):
    new = int(input())
    li.append(new)
li.sort()
print(li)

for i in range(1,len(li)):
    if li[i] != li[i-1]:
        if li[i] == li[i-1]+1:
            count += 1
        else:
            newseq = max(newseq, count)     
            count = 0
print(newseq+1)