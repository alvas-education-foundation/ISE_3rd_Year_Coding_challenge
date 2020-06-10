import cmath
a = int(input())
b = int(input())
c = int(input())
d = (b**2) - (4*a*c)
x1 = (-b-cmath.sqrt(d))/(2*a)
x2 = (-b+cmath.sqrt(d))/(2*a)
print('The roots are {0} and {1}'.format(x1,x2))