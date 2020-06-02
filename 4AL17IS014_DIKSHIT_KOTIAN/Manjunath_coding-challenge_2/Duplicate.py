st=input()
t="" 
for i in st: 
    if(i in t): 
        continue
    else: 
        t=t+i 
print(t) 