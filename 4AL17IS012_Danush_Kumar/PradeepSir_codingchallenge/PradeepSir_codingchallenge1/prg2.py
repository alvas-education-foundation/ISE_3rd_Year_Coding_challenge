'''Write a python program to find the duplicate values of an array of integer values
 '''

import numpy as y 

def unique(lst):
    x=y.array(lst)
    print(y.unique(x))

lst=[]
n=int(input("Number of elements"))
for i in range(0,n):
        ele=int(input())
        lst.append(ele)
unique(lst)