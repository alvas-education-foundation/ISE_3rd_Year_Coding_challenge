''' Write a Java program to find the length of the longest consecutive elements sequence from a given unsorted array of integers '''

nums=[]
n=int(input())
for i in range(n):
    e=int(input())
    nums.append(e)
nums.sort()
seq = 1
curr = 1
for i in range(1, len(nums)):
    if nums[i] != nums[i-1]:
        if nums[i] == nums[i-1]+1:
            curr += 1
        else:
            lseq = max(seq, curr)
            curr = 1
print(seq)