'''. Write a Java program to find the second most frequent character in a given string'''


from collections import Counter
a = input("The given String")

ctr = Counter(a)
s= ctr.most_common(2)[1]
print(s)  