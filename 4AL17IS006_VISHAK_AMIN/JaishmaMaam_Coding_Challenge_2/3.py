
#type end the line in output.
from sys import stdin
line =[]
for l in stdin:
    if l == 'end\n':
        break
    else:
        line.append(l.rstrip())
n = 1
for i in line:
  print(n,i)
  n += 1 