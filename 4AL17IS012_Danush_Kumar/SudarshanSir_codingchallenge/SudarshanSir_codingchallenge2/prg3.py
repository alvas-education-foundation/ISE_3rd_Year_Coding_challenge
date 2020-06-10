''' Given a square matrix, calculate the absolute difference between the sums of its diagonals. The function must return an integer representing the absolute diagonal difference.
The diagonalDifference takes the following parameter: '''


li=[]
mp ={}
n = int(input())
for i in range(0,n):
    ele = int(input())
    li.append(ele)

for i in li:
    if i in mp:
        mp[i] +=1
    else:
        mp[i] = 1
mp = sorted(list(mp.items()))
s =0
for i in mp:
    n -= i[1]
    s+=n