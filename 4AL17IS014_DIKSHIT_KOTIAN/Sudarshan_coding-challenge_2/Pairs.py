l=[]
n=int(input())
for i in range(n):
    l.append(int(input()))
k=int(input())
for i in range(n):
    for j in range(i,n):
        if(i!=j):
            if((l[i]+l[j])%k==0):
                print("(",l[i],",",l[j],")")