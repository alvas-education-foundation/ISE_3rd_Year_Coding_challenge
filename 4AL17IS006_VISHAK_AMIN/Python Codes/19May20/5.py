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

