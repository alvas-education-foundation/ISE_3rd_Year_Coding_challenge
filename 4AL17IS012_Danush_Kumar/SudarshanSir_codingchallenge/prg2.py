''' 2)	Given an array,A, of  N integers and an array, W, representing the respective weights of A's elements, calculate and print the weighted mean of A's elements. Your answer should be rounded to a scale of  decimal place  '''

N = map(int,input().split())
X = list(map(int, input().strip().split(' ')))
W = list(map(int, input().strip().split(' ')))
sum_X = sum([a*b for a,b in zip(X,W)])
print(round((sum_X/sum(W)),1))