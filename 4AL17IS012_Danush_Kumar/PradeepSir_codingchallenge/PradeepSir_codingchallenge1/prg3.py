''' 3)	Write a program to get a date before and after 1 year compares to the current date. '''

from datetime import date as t 
from datetime import timedelta as t1

current = t.today()   
before = (t.today()-t1(days=365))
after = (t.today()+t1(days=365))

print("Current Date: ",current)
print("Before : ",before)
print("After : ",after)