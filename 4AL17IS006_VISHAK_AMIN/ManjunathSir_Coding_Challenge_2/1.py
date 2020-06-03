s = input()
n = len(s)
sn = ""

for i in range(0,n):
    for j in range(n-i):
        new = j + i 
        for k in range(j,new+1):
            sn = sn + s[k]
        newlen = len(sn)-1
        if newlen!=0:
            if (sn[0] == 'a' or sn[0] == 'e' or sn[0] == 'i' or sn[0] == 'o' or sn[0] == 'u') and (sn[0] != 'a' or sn[0] != 'e' or sn[0] != 'i' or sn[0] != 'o' or sn[0] != 'u'):
                print(sn)
        sn = ''