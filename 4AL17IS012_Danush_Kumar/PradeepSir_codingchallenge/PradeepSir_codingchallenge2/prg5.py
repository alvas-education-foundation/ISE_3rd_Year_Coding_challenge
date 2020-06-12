''' Python Program to Find All Roots of a Quadratic Equation '''

import cmath

a = 1
b = 5
c = 6

# calculate the discriminant
d = (b**2) - (4*a*c)

# find two solutions
ans1 = (-b-cmath.sqrt(d))/(2*a)
ans2 = (-b+cmath.sqrt(d))/(2*a)

print('The solution are {0} and {1}'.format(ans1,ans2))