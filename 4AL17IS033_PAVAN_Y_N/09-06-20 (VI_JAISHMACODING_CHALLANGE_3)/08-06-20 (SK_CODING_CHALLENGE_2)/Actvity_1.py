from statistics import stdev
li=[]
n = int(input())
for i in range(0,n):
    ele = int(input())
    li.append(ele)    
print("Standard Deviation is: " ,stdev(li))
