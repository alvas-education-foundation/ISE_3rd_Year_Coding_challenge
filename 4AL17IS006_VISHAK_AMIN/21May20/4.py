# Task
# Read two integers from STDIN and print three lines where:

# The first line contains the sum of the two numbers.
# The second line contains the difference of the two numbers (first - second).
# The third line contains the product of the two numbers.
# Input Format

# The first line contains the first integer, . The second line contains the second integer, .

# Constraints



# Output Format

# Print the three lines as explained above
def calc(a,b):
    r1 = a+b
    r2 = a-b
    r3 = a*b
    print(r1)
    print(r2)
    print(r3)
if __name__ == '__main__':
    a = int(input())
    b = int(input())
    calc(a,b)