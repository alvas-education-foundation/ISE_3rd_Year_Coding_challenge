n = input()
n1 = input()

if  n.isalpha() or n1.isalpha():
    print("Error")
else:
    sum = int(n)+float(n1)
    print(sum)