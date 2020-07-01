# Activity 2:
# Given an integer, and find the super digit of the integer.

n, k = map(int, input().split())
x = n * k % 9
print(x if x else 9)
