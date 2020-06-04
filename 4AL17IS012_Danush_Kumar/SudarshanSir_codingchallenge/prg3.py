''' 3)	Given an array,X , of n  integers, calculate the respective first quartile (Q1), second quartile (Q2), and third quartile (Q3). It is guaranteed that ,Q1,Q2,Q3  are integers ''' 


n = int(input())
x = sorted(list(map(int, input().split())))
from statistics import median
print(int(median(x[:n//2])))
print(int(median(x)))
print(int(median(x[(n+1)//2:])))
