# Task
# Read an integer . For all non-negative integers , print . See the sample for details.

# Input Format

# The first and only line contains the integer, .

# Output Format

# Print  lines, one corresponding to each .

def calc(n):
    for i in range(0,n):
        print(i*i)
if __name__ == '__main__':
    n = int(input())
    calc(n)