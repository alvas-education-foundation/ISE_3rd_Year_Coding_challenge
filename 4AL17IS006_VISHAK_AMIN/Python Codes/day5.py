
a = [66,57,54,53,64,52,59]


for i in range(len(a)):
    for j in range(0, len(a)-i-1):
        if(a[j]>a[j+1]):       
            temp = a[j]
            a[j] = a[j+1]
            a[j+1] = temp

print("Best score:" +str(a[len(a)-1]))            