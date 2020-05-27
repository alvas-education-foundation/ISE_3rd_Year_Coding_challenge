PRGM1:

Python program to check whether a number is Prime or not

num = 11
  
if num > 1: 
        for i in range(2, num):  
       if (num % i) == 0: 
           print(num, "is not a prime number") 
           break
   else: 
       print(num, "is a prime number") 
  
else: 
   print(num, "is not a prime number") 


PRGM2:

Python Program for n-th Fibonacci number

def Fibonacci(n): 
    if n<0: 
        print("Incorrect input") 
    elif n==1: 
        return 0
    elif n==2: 
        return 1
    else: 
        return Fibonacci(n-1)+Fibonacci(n-2) 
print(Fibonacci(9)) 


PRGM3:

Program to print ASCII Value of a character

c = 'g'
# print the ASCII value of assigned character in c 
print("The ASCII value of '" + c + "' is", ord(c)) 


PRGM4:

Python Program for array rotation

def leftRotate(arr, d, n): 
    for i in range(d): 
        leftRotatebyOne(arr, n) 
def leftRotatebyOne(arr, n): 
    temp = arr[0] 
    for i in range(n-1): 
        arr[i] = arr[i+1] 
    arr[n-1] = temp 
def printArray(arr,size): 
    for i in range(size): 
        print ("%d"% arr[i],end=" ") 
arr = [1, 2, 3, 4, 5, 6, 7] 
leftRotate(arr, 2, 7) 
printArray(arr, 7) 


PRGM5:

Python Program for Find remainder of array multiplication divided by n

def findremainder(arr, lens, n): 
    mul = 1
    for i in range(lens):  
        mul = (mul * (arr[i] % n)) % n 
         return mul % n 
arr = [ 100, 10, 5, 25, 35, 14 ] 
lens = len(arr) 
n = 11 
print( findremainder(arr, lens, n))



