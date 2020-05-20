# Given a  2D Array, :

# 1 1 1 0 0 0
# 0 1 0 0 0 0
# 1 1 1 0 0 0
# 0 0 0 0 0 0
# 0 0 0 0 0 0
# 0 0 0 0 0 0
# We define an hourglass in  to be a subset of values with indices falling in this pattern in 's graphical representation:

# a b c
#   d
# e f g
# There are  hourglasses in , and an hourglass sum is the sum of an hourglass' values. Calculate the hourglass sum for every hourglass in , then print the maximum hourglass sum.

# For example, given the 2D array:

# -9 -9 -9  1 1 1 
#  0 -9  0  4 3 2
# -9 -9 -9  1 2 3
#  0  0  8  6 6 0
#  0  0  0 -2 0 0
#  0  0  1  2 4 0
# We calculate the following  hourglass values:

# -63, -34, -9, 12, 
# -10, 0, 28, 23, 
# -27, -11, -2, 10, 
# 9, 17, 25, 18
# Our highest hourglass value is  from the hourglass:

# 0 4 3
#   1
# 8 6 6

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the hourglassSum function below.
def hourglassSum(arr):
    n = len (arr)
    sm = -9 * 7
    for r in range(n-2):
        for c in range (n-2):
            n1 = arr[r][c]
            n2 = arr[r][c+1]
            n3 = arr[r][c+2]
            m = arr[r+1][c+1]
            b1 = arr[r+2][c]
            b2 = arr[r+2][c+1]
            b3 = arr[r+2][c+2]
            s = n1+n2+n3+m+b1+b2+b3
            sm = max(s, sm)
    return sm         


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))

    result = hourglassSum(arr)

    fptr.write(str(result) + '\n')

    fptr.close()

