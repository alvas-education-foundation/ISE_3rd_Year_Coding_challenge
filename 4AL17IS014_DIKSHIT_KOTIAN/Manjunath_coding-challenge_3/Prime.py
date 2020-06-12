n=int(input())
num=2
f,isprime=0,0
while(num<n):
    for i in range(2,((num//2)+1)):
        if(num%i==0):
            f=1
            break
    if(f==0):   
        isprime=isprime+1
        if((isprime%2)!=0):
            print(num)
    num=num+1
    f=0