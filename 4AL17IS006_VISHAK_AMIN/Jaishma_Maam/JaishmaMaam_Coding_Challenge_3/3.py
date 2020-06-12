import numpy as np
n = int(input())
li = []
for i in range(0, n):
    ele = []
    ele.append(int(input()))
    ele.append(input("enter name: "))
    ele.append(float(input("Enter CGPA: ")))

    li.append(tuple(ele))


data_type = [('ID', int), ('name', 'S15'), ('CGPA', float)]
print(li)
students = np.array(li, dtype=data_type)
s = np.sort(students, order=['CGPA'])


for i in s:
    print(i[1])

