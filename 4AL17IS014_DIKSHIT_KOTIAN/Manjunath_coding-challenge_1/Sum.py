"""Using a method, pass two variables and find the sum of two numbers.
Test case:
Number 1 – 20
Number 2 – 20.38
Sum = 40.38
There were a total of 4 test cases. Once you compile 3 of them will be shown to you and 1 will be a hidden one. 
You have to display error message if numbers are not numeric."""


def sum(a,b):
    c=a+b
    print(c,"\n")
t=int(input())
while(t>0):
    try:
        a=float(input())
        b=float(input())
        sum(a,b)
        t=t-1
    except:
        print("Enter numbers only")
