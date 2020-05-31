n = int(input("Input an integer"))
sum1 = 0
count=0
temp = n
t=n
while t>0:
    t=t//10
    count=count+1
while temp > 0:
   rem = temp % 10
   sum1 += rem ** count
   temp =temp// 10
print("Is an Armstrong number?")
if n == sum1:
   print("Yes")
else:
   print("No")
