str1 = input()
l = []
ch = {}
for c in str1:
    if c in ch:
        ch[c] += 1
    else:
        ch[c] = 1 
        l.append(c)

for c in l:
    if ch[c] == 1:
        print(c)
        break
    else:    
        print("No Non Repeating Character")    

