n = int(input())
li = []
we = []
mean = 0
for i in range(n):
    ele = int(input("Enter array element:\n"))
    li.append(ele)
for i in range(n):
    wei = int(input("Enter weight of array element:\n"))
    we.append(wei)
sum_we = sum(we)    
for i in range(n):
    mean = mean + (li[i]*we[i])
print(round(mean/sum_we))   
