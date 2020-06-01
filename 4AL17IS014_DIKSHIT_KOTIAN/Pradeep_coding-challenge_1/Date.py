from datetime import date, timedelta

current = date.today()   
before = (date.today()-timedelta(days=365))
after = (date.today()+timedelta(days=365))

print("Current Date: ",current)
print("Before : ",before)
print("After : ",after)
