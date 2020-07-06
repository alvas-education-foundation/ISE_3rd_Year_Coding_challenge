#!/usr/bin/env python
# coding: utf-8

# In[1]:


#Write a Pandas program to create and display a one-dimensional array using series  containing  event numbers upto 10000
import pandas as pd
li =[]
for i in range(0,100001):
    if i%2 == 0:
        li.append(i)
df = pd.Series(li)
print(df)


# In[5]:


#Write a Pandas program to convert a Panda module Series of the numbers which are between 1000 and 2000 (both inclusive) and divisable by 5 to Python list and  after convertion print its type 
import pandas as pd
li =[]
for i in range(1000,2001):
    if(i % 5 == 0):
        li.append(i)
df = pd.Series(li)       
print(df)
print("After convert to list")
print(df.tolist())


# In[9]:
#Write a Pandas program to add, subtract, multiple and divide two Pandas Series and print their results using the Sample Series: [2, 4, 6, 8, ...100], [1, 3, 5, 7, 9...99]
import pandas as pd
li = []
li2 = []
for i in range(0,100):
    if(i%2 == 0):    
        li.append(i)
    else:
        li2.append(i)
df1 =pd.Series(li)
df2 = pd.Series(li2)
df_add= df1+df2
df_sub = df_add - df2
df_mul = df1*df2
df_div = df1/df2
print("Addition: ", df_add)
print("Sub: ", df_sub)
print("Mul: ", df_mul)
print("Mul: ", df_div)


# In[15]:


#Write a Pandas program to compare (Equivalence, greater than, less than, not equal to )the elements of the two Pandas Series.

import pandas as pd
l =[]
l1 = []
for i in range(1,101):
    if(i%7==0):
        l.append(i)
    if(i%11==0):
        l1.append(i)
leng = len(li) - len(l1)
for i in range(leng):
    l1.append(0)
df1 = pd.Series(l)
df2 = pd.Series(l1)
print("Series: 1 ", df1)
print("Series: 2", df2)
print("Equals")
print(df1 == df2)
print("less than", df1<df2)


# In[18]:


#Write a Pandas program to convert a NumPy array to a Pandas series.
import numpy as np
import pandas as pd
li = []
for i in range(0,1001,10):
    li.append(i)
n_a = np.array(li)
print(n_a)
n_ser = pd.Series(n_a)
print(n_ser)


# In[23]:


#Write a Pandas program to convert a given Series to an array.
#Sample series is ['100', '200', ‘300’,’400’,’500’,'python', '300.12', '400',’is’,’great’,’language’]
import numpy as np
import pandas as pd
a = pd.Series(['100', '200', '300','400','500','python', '300.12','400','is', 'great' , 'language'])
print(a)
print("After Series to array")
n = np.array(a.values.tolist())
print(n)


# In[24]:


#Write a Pandas program to sort a given Series.
#Sample series is ['100', '200', ‘300’,’400’,’500’,'python', '300.12', '400',’is’,’great’,’language’]

import pandas as pd
a = pd.Series(['100', '200', '300','400','500','python', '300.12', '400','is','great','language'])
print(a)
new= pd.Series(a).sort_values()
print(new)


# In[25]:


#Write a Pandas program to create a subsets of a given series based on value and condition.
#Sample NumPy array: d1 = [10, 20, 30, 40, 50... 1000]
# value and condtion :  Subset 1 :numbers divisable by 7  Subset 2 : numbers divisable by 5

import pandas as pd
l = []
for i in range(0,1001,10):
    l.append(i)
n = pd.Series(l)
print(n)
print("Subset of Above is: ")
n1 = n[n%7==0]
print(n1)
n2 = n[n%5==0]
print(n2)


# In[27]:


#Write a Pandas program to create the mean and standard deviation, maximum and minimum of the data of a given Series of the prime numbers upto 1000
import pandas as pd
l=[]
n=0
for j in range(2,1001):
    n=0
    for i in range(2,j):
        if (j % i) == 0:
            n=1
            break
    if(n==0):
        l.append(j)
print(l)
d = pd.Series(l)
print("Original Data Series:")
print(d)
print("Mean of the said Data Series:")
print(d.mean())
print("Standard deviation of the said Data Series:")
print(d.std())
print(d.max())
print(d.min())


# In[29]:


#Write a Pandas program to get the elements of an array values into column-wise.
#Sample data: {‘X’:[All odd numbers but not divisable by 7 upto 1000], 'Y':[ All even numbers but not divisable by 5 upto 1000 ],'Z':[ All odd numbers but not divisable by 3 upto 1000]}
import pandas as pd
X=[]
Y=[]
Z=[]
for i in range(1,1001):
    if(i%2==0):
        if(i%5!=0):
            Y.append(i)
    else:
        if(i%7!=0):
            X.append(i)
        if(i%3!=0):
            Z.append(i)
l=len(X)-len(Y)
l1=len(X)-len(Z)
for i in range(l):
    Y.append(0)
for i in range(l1):
    Z.append(0)
df = pd.DataFrame({'X':X, 'Y':Y,'Z':Z});
print(df)


# In[30]:


#Write a Pandas program to display the first 10 rows of the DataFrame for any particular three fields.
import pandas as pd
X=[]
Y=[]
Z=[]
for i in range(1,1001):
    if(i%2==0):
        if(i%5!=0):
            Y.append(i)
    else:
        if(i%7!=0):
            X.append(i)
        if(i%3!=0):
            Z.append(i)
l=len(X)-len(Y)
l1=len(X)-len(Z)
for i in range(l):
    Y.append(0)
for i in range(l1):
    Z.append(0)
df = pd.DataFrame({'X':X, 'Y':Y,'Z':Z});
_res = df.head(10)
print(_res)


# In[31]:


#Write a Pandas program to get the details of the seventh movie of the DataFrame for any particular three fields #(movie_metadata.csv file).
import pandas as pd
df = pd.read.csv('movie_metadata.csv')
l1 = df.iloc[6][0]
l2 = df.iloc[6][1]
l3 = df.iloc[6][2]
print(third_movie)


# In[32]:


#Write a Pandas program to sort the DataFrame based on title_year from dataset of movie_metadata.csv for any particular three fields

import pandas as pd
df = pd.read.csv('movie_metadata.csv')
df1 = df[['num_user_for_reviews','language','country','content_rating','budget','title_year']]
result = df1.sort_values('title_year')
print("DataFrame.")
print(result)


# In[33]:


#Write a NumPy program to create a 4x4 array with random values and find the minimum and maximum values.
import numpy as np
x = np.random.random((4,4))
print(x) 
_min = x.min()
_max =  x.max()
print("Minimum and Maximum are")
print(_min, _max)


# In[34]:


#Write a NumPy program to create a random 10x10 array and extract the 2nd and 3rd rows of the  array and store them into a variable.
import numpy as np
x = np.random.random((10,10))
print(x) 
_min = x.min()
_max =  x.max()
print("Minimum and Maximum are")
print(_min, _max)


# In[ ]:




