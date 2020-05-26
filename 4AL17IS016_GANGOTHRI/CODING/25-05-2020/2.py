#Consider a list (list = []). You can perform the following commands:

# insert i e: Insert integer  at position .
# print: Print the list.
# remove e: Delete the first occurrence of integer .
# append e: Insert integer  at the end of the list.
# sort: Sort the list.
# pop: Pop the last element from the list.
# reverse: Reverse the list.
# Initialize your list and read in the value of  followed by  lines of commands where each command will be of the  types listed above. Iterate through each command in order and perform the corresponding operation on your list.

# Input Format

# The first line contains an integer, , denoting the number of commands.
# Each line  of the  subsequent lines contains one of the commands described above.


L =[]
N = int(input())

for i in range (0, N):
    tokens = input().split()

    if tokens[0] == 'insert':
        L.insert(int(tokens[1]), int(tokens[2]))
    elif tokens[0] == 'print':
        print(L)
    elif tokens[0] == 'remove':
        L.remove(int(tokens[1]))
    elif tokens[0] == 'append':
        L.append(int(tokens[1]))
    elif tokens[0] == 'sort':
        L.sort()
    elif tokens[0] == 'pop':
        L.pop()
    elif tokens[0] == 'reverse':
        L.reverse()