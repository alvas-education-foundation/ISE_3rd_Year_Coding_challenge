# Given the names and grades for each student in a Physics class of  students, store them in a nested list and print the name(s) of any student(s) having the second lowest grade.

# Note: If there are multiple students with the same grade, order their names alphabetically and print each name on a new line.

# Input Format

# The first line contains an integer, , the number of students.
# The  subsequent lines describe each student over  lines; the first line contains a student's name, and the second line contains their grade.

# Constraints

# There will always be one or more students having the second lowest grade.
# Output Format

# Print the name(s) of any student(s) having the second lowest grade in Physics; if there are multiple students, order their names alphabetically and print each one on a new line.

mark = []
scoresh = []
if __name__ == '__main__':
    for _ in range(int(input())):
        name = input()
        score = float(input())
        mark += [[name, score]]
        scoresh += [score]
    x = sorted(set(scoresh))[1]
    
    for n , s in sorted(mark):
        if s == x:
            print(n)