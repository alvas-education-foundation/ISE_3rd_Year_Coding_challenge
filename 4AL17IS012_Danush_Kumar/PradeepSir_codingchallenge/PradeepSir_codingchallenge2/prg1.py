''' Program to print right angled pyramid of numbers '''

def pattern(n):
     for i in range(0,n):
         for j in range(0, i+1):
              print("* " , end="")
         print("\r")

n=int(input())
pattern(n)