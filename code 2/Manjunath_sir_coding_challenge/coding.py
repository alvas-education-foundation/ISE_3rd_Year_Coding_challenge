01.
# solution for 1st question
n = input()
n1 = input()

if  n.isalpha() or n1.isalpha():
    print("Error")
else:
    sum = int(n)+float(n1)
    print(sum)





02.
# solution for 2st question
n = int(input())

if n % 2 == 0:
    n = int(n / 2)
    n = 2 * (n-1)
    print(int(n/2))

else:
    n = int(n/2) + 1
    n = 2 * (n-1)
    print(n)   






03.
# solution for 3st question
n = str(input())
val = int(n,17)

print(val)
