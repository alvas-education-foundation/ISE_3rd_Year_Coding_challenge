'''1. Using a method, pass two variables and find the sum of two numbers.
Test case:
Number 1 – 20
Number 2 – 20.38
Sum = 40.38
There were a total of 4 test cases. Once you compile 3 of them will be shown to you and 1 will be a hidden one. You have to display error message if numbers are not numeric.
'''




x=input()
y=input()

if x.isalpha() | y.isalpha():
	print("not an numeric value!")
else:
	sum=int(x)+float(y)
	print(sum)