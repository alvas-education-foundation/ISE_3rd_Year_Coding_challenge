def findmaxrow(l):
    row =-1
    (i,j) = (0, len(l[0])-1)
    while i <= len(l) - 1 and j >= 0:
        if l[i][j] == 1:
            j = j - 1
            row = i
        else:
            i += 1
    return row + 1        

m,n = map(int,input().strip().split())
l =[]
for i in range(m):
    c = []
    for j in range(n):
        e=int(input())
        c.append(e)
    l.append(c)   
max1 = findmaxrow(l)
print("Max Row is ",max1)