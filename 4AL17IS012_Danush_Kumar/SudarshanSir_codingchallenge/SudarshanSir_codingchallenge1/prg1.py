''' Given an array, , of  integers, calculate and print the respective mean, median, and mode on separate lines. If your array contains more than one modal value, choose the numerically smallest one.   '''


a = int(input())
numbers = list(map(int, input().split(" ")))
numbers.sort();
maxq=1
currentMax=1
flag=0
mode=numbers[0]
mean = sum(numbers)/a
if a%2==0:
    median = (numbers[a//2]+numbers[(a//2)-1])/2
else :
    median = numbers[(a//2)+1]
for i in range(1, len(numbers)-1):
    if(numbers[i] == numbers[i-1]):
        maxq=maxq+1
        if maxq > currentMax:
          mode =numbers[i]
          flag=1
    else:
        if flag == 1:
         currentMax = maxq
         flag =0
        maxq=1

print(mean)
print(median)
print(mode)