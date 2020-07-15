#!/usr/bin/env python
# coding: utf-8

# In[3]:


# 1. Add rollno and marks {name:mark} for n number of students through keyboard in a dictionary and print the marks in descending order with respective name.
n = int(input("Enter nth number"))
d = {}
for i in range(0, n):
    roll = int(input("Roll is : "))
    mark = int(input("Marks is : "))
    d[roll] = mark
final = sorted(d.items(), reverse=True)
print(final
# In[8]:


# 2. Add  name and salary {name:salary} for n number of employees through keyboard in a dictionary and print them in name alphabetical order with salary
n=int(input("Enter the nth number"))
d={}
for i in range(0, n):
    name=input("Name is : ")
    salary=int(input("Salary is : "))
    d[name]=salary
final=sorted(d.items())
print(final)


# In[12]:


# 3. Add  name and salary {name:salary} for n number of employees through keyboard in a dictionary and print them in salary  ascending order and  sum, max, min and average of the salaries
n=int(input("Enter nth number"))
d={}
for i in range(0, n):
    name=input("Name is : ")
    salary=int(input("Salary is : "))
    d[name]=salary
final={}
final=sorted(d.items())
sum1=sum(d.values())
min1=min(d.values())
max1=max(d.values())
avg=sum1/n
print("Sum : ", sum1)
print("Min : ", min1)
print("Max : ", max1)
print("Avg : ", avg)
print(final)


# In[14]:


# 4. Add name and salary {name:salary} for n number of employees through keyboard in a dictionary and print only the employees whose salary is greater than 2000 but less than 4000
n=int(input("Enter nth number"))
d={}
for i in range(0, n):
    name=input("Name is : ")
    salary=int(input("Salary is : "))
    d[name]=salary

for i in d:
    if d[i] > 2000 and d[i] < 4000:
        print(i, d[i])



# In[15]:


# 5. Python program to convert a 3 digit number  into words
import inflect
n=int(input("Enter the The number"))
p=inflect.engine()
p.number_to_words(n)


# In[16]:


# Python Program to count the total number of charaters (except blank space) in a text file.
l=0
c=0
k=0
with open("doc.txt", "r") as file:
    for line in file:
        l=l+1
        for i in line:
            c=c+1
            if i == " ":
                k=k+1
    c=c-k-(l-1)
    print("No. of char:", c)


# In[17]:


# Python Program to append the contents of one file to another file by getting the both file names through keyboard .
with open("doc.txt") as file:
    with open("doc1.txt", "a") as file1:
        for i in file:
            file1.write(i)



# In[21]:


# Python Program to count the number of blank spaces in a text file.
c=0
with open("doc1.txt", "r") as file:
    for i in file:
        for j in i:
            if j == " ":
                c += 1
    print(c)


# In[24]:


# Python Program to read a file and capitalize the first letter of every word in the file and copy the every word capitalized content  into another file and read it .

with open("doc1.txt", "w+") as file:
    for l in file:
        l.title()
        file.write(l)



# In[25]:


# Python Program to print all the numbers present in a text file with its total number of occurrence.
c=0
with open("doc1.txt", "r") as f:
    for i in f:
        if(i == '0' or i == '1' or i == '2' or i == '3' or i == '4' or i == '5' or i == '6' or i == '7' or i == '8' or i == '9'):
            c=+ 1
    print(c)


# In[ ]:
