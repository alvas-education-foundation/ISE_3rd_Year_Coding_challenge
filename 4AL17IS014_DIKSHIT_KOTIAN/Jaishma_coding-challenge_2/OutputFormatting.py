n=int(input())
sl=[]
n1=[]
for i in range(n):
    str1=input()
    num=int(input())
    sl.append(str1)
    n1.append(num)
for i in range(n):
    rem_length=15-len(sl[i])
    new_length=len(sl[i])+rem_length
    new_string=sl[i].ljust(new_length)
    print(new_string,end="")
    if(n1[i]<10):
        print("00",end="")
    elif(n1[i]>9 and n1[i]<100):
        print("0",end="")
    print(n1[i])