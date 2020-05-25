#Codevita Coin Distribution Problem
#  




value = int(input())

five = int((value - 4)/5)

if(value-five*5)%2:
    one = 2
else:
    one = 1

two = int((value - 5*five-1*one)/2)


sum = one + two +five

print(sum,five,two,one)