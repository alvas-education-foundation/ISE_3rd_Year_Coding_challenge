''' Write a Java program to segregate all 0s on left side and all 1s on right side of a given array of 0s and 1s '''

x=[]
n=int(input())
for x in range(int(n)): 
    number=int(input())
    x.append(number)
x = ([i for i in x if i==0] + [i for i in x if i==1])
print(x)
