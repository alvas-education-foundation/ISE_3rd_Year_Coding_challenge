n=int(input())
for i in range((n*2)-1):
    print("*",end="")
print()
k=2
m=(n*2)-1
for i in range(n-2):
    for j in range(i+1):
        print(" ",end="")
    print("*",end="")
    for j in range(k,m-k):
         print(" ",end="")
    print("*")
    k=k+1
for i in range(n-1):
    print(" ",end="")
print("*")