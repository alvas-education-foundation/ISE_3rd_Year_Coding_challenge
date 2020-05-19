

def floppy(f,u,o,n):

    total = f+u
    res =  u - o

    res1 = res + n

    res2 = total -res1

    print("Free availble disk is:", res2)

    # total = f+u
    # curreU = u -o
    # curreU = curreU +n
    # currf = total-curreU
    # print(currf)
f = int(input("Enter the floppy disk size: "))
u = int(input("Enter the used byte' s: "))
o = int(input("Delete file size of: "))
n = int(input("Create a new file :"))

floppy(f,u,o,n)