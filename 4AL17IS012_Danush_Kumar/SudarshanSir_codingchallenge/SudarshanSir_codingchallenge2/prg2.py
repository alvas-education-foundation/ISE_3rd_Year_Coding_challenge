''' You are given an array of  integers,a ,a[]= {1,2,3,4,,5,6….k} and a positive integer, k. Find and print the number of  pairs(i,j) where i<j  and  a[i]+ a[j] is divisible by k. '''


n,k = (int(x) for x in input().split())
lst = list(map(int, input().split()))

count = 0
for i in range(len(lst)-1):
    for x in range(1+i, len(lst)):     
        if (lst[i] + lst[x]) % k == 0:
            count += 1
        
print(count)