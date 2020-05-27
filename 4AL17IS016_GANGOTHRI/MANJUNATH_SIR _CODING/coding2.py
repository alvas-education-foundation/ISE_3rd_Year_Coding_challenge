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

