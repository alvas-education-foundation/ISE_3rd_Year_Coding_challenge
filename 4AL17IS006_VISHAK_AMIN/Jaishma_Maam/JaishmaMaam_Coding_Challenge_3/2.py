import re
n = int(input())
li = []
for i in range(n):
    ele = input()
    li.append(ele)
try:
    for i in range(n):
        Pattern = re.compile(li[i])
        print("Valid")
except:
    print("Invalid")
