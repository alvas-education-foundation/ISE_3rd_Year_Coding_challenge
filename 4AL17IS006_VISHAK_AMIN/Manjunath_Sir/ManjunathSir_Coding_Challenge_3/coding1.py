n = input()

t ='01'
count = 0
for i in n:
    if i not in t:
        count = 1
        break
    else:
        pass

if count :
    print("No")
else:
    print("Yes")    