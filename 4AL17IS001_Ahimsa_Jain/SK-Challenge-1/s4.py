4)	The interquartile range of an array is the difference between its first (Q1) and third (Q3) quartiles. Given an array,X, of  n integers and an array, F, representing the respective frequencies of X's elements, construct a data set,S, where each  occurs at frequency f. Then calculate and print S's interquartile range, rounded to a scale of  
1 decimal place.

Input format:
The first line contains an integer,n, denoting the number of elements in arrays X and F .
The second line contains  n space-separated integers describing the respective elements of array X.
The third line contains  n space-separated integers describing the respective elements of array F.

Output Format:

Print the interquartile range for the expanded data set on a new line. Round your answer to a scale of  1 decimal place.


import statistics as st

n = int(input())
data = list(map(int, input().split()))
freq = list(map(int, input().split()))

s = []
for i in range(n):
    s += [data[i]] * freq[i]
N = sum(freq)
s.sort()

if n%2 != 0:
    q1 = st.median(s[:N//2])
    q3 = st.median(s[N//2+1:])
else:
    q1 = st.median(s[:N//2])
    q3 = st.median(s[N//2:])

ir = round(float(q3-q1), 1)
print(ir)