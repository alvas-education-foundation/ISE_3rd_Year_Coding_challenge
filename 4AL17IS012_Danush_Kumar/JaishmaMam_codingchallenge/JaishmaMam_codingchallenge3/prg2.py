''' Regex problem '''

import re
exp=input()
try:
    re.compile(exp)
    print("Valid")
except re.error:
    print("Invalid")