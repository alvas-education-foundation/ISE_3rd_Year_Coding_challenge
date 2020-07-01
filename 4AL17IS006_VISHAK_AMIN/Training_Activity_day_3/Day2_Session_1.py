#!/usr/bin/env python
# coding: utf-8

# In[2]:


n= int(input())
li = []
for i in range(0,n):
    li.append(i*3)
print(li)    


# In[5]:


upper = int(input("Upper : "))
lower = int(input("Lower: "))
li =[]
for i in range(lower,upper+1):
    if (i % 5 == 0) and (i%7 == 0):
        li.append(i)
print(li)        


# In[7]:


#Add the n number of names in a list and print them alphabetically and reverse alphabetically.
n = int(input("Enter the number of str"))
li =[]
for i in range(0,n):
    li.append(input(""))
li.sort()
print(li)
li.reverse()
print(li)
              
              


# In[35]:


#Print  perfect squares and divisible by 5 between 500 and 1000( (both inclusive) using list
import math
d =[]
li=[]
for i in range(500,1001):
    if( i % 5 ==0):
        li.append(i)
for i in li:
    s = math.sqrt(i)
    if (s-math.floor(s)==0):
        d.append(i)    
print(d)    


# In[36]:


#Get  a string and store word by word as elements in a tuple and find the largest word in the  tuple and print it
n = int(input())
t=()
for i in range(0,n):
    t +=(input(),)
print(t)    


# In[40]:


#Get rollno and marks (Rollno, mark) as list of tuples for n number of students through keyboard  and print them in marks descending order with rollno.
n = int(input())
l = []
for i in range(0,n):
    roll =  int(input("roll no :"))
    mark =  int(input("Marks : "))
    l.append((roll,mark))
l.sort()
tuple(l)
print(l)


# In[43]:


#Get name and salary (name, salary) as list of tuples for n number of employees through keyboard  and print them in name alphabetical order with salary
n = int(input())
l = []
for i in range(0,n):
    name =  input("Enter name :")
    salary =  int(input("Enter Salary : "))
    l.append((name,salary))
l.sort()
tuple(l)
print(l)


# In[ ]:




