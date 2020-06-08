a = int(input("Enter a:"))
b = int(input("Enter b:"))
c = int(input("Enter c:"))

d = b**2 - 4*a*c
e = d**0.5 #square root
if d<0:
    print("Roots are Imaginary:")

else:
    r1 = (-b+e)/2*a*c    
    r2 = (-b-e)/2*a*c
    print("The 1st Root:", round(r1,3))
    print("The 2st Root:", round(r2,3))    