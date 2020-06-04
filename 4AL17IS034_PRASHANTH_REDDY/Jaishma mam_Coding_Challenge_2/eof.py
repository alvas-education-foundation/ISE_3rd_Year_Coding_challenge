from sys import stdin
l=[]
for line in stdin:
  if(line=='Exit\n'):
    break
  else:
    l.append(line.rstrip())
for i in l:
  print(i)