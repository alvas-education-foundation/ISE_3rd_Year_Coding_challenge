import statistics as st

n = int(input())
data = list(map(int, input().split()))
freq = list(map(int, input().split()))

s = []
for i in range(n):
    s += [data[i]] * freq[i]
sum1 = sum(freq)
s.sort()

if n%2 != 0:
    q1 = st.median(s[:sum1//2])
    q3 = st.median(s[sum1//2+1:])
else:
    q1 = st.median(s[:sum1//2])
    q3 = st.median(s[sum1//2:])

ans = round(float(q3-q1), 1)
print(ans)
