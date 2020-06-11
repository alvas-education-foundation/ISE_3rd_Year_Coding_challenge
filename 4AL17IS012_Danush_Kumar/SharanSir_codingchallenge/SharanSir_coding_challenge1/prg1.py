'''Write a Program to check whether a number is an Armstrong Number or not'''


num = int(input())  
sum = 0  
t = num  
  
while t > 0:  
   digit = t % 10  
   sum += digit ** 3  
   t //= 10  
    
print("Is Armstrong number?")
if num == sum:  
   print("True")  
else:  
   print("False")  