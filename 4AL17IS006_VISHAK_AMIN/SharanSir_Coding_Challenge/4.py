"""
To segregate all 0s on left side and all 1s on right side of a given array of 0s and 1s
"""
n = int(input())
li =[]
for i in range(0,n):
    new = int(input())
    li.append(new)
li.sort()
print(li)