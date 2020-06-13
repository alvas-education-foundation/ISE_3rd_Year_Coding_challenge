'''Write a program to find the index of an array element. '''

n = int(input())
x=[]
for i in range(n):
    ele=int(input())
    x.append(ele)
k=int(input())
index=x.index(k)
print(index)