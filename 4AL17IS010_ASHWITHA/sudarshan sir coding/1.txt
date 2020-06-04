import numpy as np
from scipy import stats
n = int(input())
li = []

for i in range(n):
    ele = int(input())
    li.append(ele)

mean = np.mean(li)
median = np.median(li)
mode = stats.mode(li)
print(mean)
print(median)
print(mode)