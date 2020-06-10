'''  Given an array,X of N integers, calculate and print the standard deviation. Your answer should be in decimal form, rounded to a scale of 1 decimal place. An error margin of  +0.1 or -0.1 will be tolerated for the standard deviation. '''

from statistics import stdev
li=[]
n = int(input())
for i in range(0,n):
    ele = int(input())
    li.append(ele)    
print("Standard Deviation is: " ,stdev(li))