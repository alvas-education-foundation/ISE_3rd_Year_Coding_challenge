n = int(input())
n1=n
sum = 0
while n > 0:
    a=n%10
    sum=sum+(a*a*a)
    n=n//10

# print(s)
print("Is Armstrong number?")
if n1 == sum:
    print("True")
else:
    print("False")