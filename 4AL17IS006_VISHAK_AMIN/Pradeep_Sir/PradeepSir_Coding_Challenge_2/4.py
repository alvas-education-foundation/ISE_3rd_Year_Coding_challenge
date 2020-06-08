n = int(input("Enter n : "))
A=[]
for i in range(0,n):
    ele = int(input())
    A.append(ele)

for i in range(n):
    m_i = i
    for j in range(i+1, n):
        if A[j] < A[m_i]:
            m_i = j 
    A[i], A[m_i] = A[m_i], A[i]

print(A) 