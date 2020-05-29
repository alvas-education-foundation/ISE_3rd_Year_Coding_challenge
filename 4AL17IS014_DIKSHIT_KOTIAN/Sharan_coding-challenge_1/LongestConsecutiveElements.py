nums=[]
n=int(input())
for i in range(n):
    ele=int(input())
    nums.append(ele)
nums.sort()
lseq = 1
curr = 1
for i in range(1, len(nums)):
    if nums[i] != nums[i-1]:
        if nums[i] == nums[i-1]+1:
            curr += 1
        else:
            lseq = max(lseq, curr)
            curr = 1
print(lseq)