Rahul is a very busy persion he dont wan't to waste his time . He keeps account of duration of each and every work. Now he don't even get time to calculate duration of works, So your job is to count the durations for each work and give it to rahul.

 

Input:

First line will be given by N number of works
Next N line will be given SH,SM,EH and EM  each separated by space(SH=starting hr, SM=starting min, EH=ending hr, EM=ending min)
Output:

N lines with duration HH MM(hours and minutes separated by space)
SAMPLE INPUT 
2
1 44 2 14
2 42 8 23
SAMPLE OUTPUT 
0 30
5 41

for i in range(int(input())):

l=list(map(int,input().split()))

sh=l[0]

sm=l[1]

eh=l[2]

em=l[3]

x=60*(eh-sh)+(em-sm)

y=x//60

z=x%60

print(y,z,sep=' ')