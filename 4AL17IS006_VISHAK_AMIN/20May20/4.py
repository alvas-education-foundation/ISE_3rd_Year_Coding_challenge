#Day 11 problem from LCO

leng = input()
n = int(input())
for i in range(n):
    width, height = input().split()

if (height < leng):
        print("UPLOAD ANOTHER")
elif width == height:
        print("ACCEPTED")
else:
        print("CROP IT")    