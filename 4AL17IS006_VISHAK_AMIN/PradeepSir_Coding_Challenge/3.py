from datetime import datetime as dt
from datetime import timedelta as td

cur = dt.today()
bef = (dt.today()-td(days=365))
aft = (dt.today()+td(days = 365))

print("Current Date: ", cur)
print("Before Date: ", bef)
print("After Date: ", aft)
