2)	Given an array,A, of  N integers and an array, W, representing the respective weights of A's elements, calculate and print the weighted mean of A's elements. Your answer should be rounded to a scale of  decimal place
Input format:
1.	The first line contains an integer, N, denoting the number of elements in arrays A and W.
2.	The second line contains  N space-separated integers describing the respective elements of array A .
3.	The third line contains  N space-separated integers describing the respective elements of W array .
Output format:
•	Print the weighted mean on a new line. Your answer should be rounded to a scale of  1 decimal place (i.e.,  format).

Constraints:
•	N=[5 to 50]
•	ai=[0 to 100]
•	Wi=[0 to. 100]


def wMean(X,W,n) : 
    sum = 0
    numWeight = 0
    i = 0
    while  i < n : 
          
        numWeight = numWeight + X[i] * W[i] 
        sum = sum + W[i] 
        i = i + 1
   
    return (float)(numWeight / sum) 
  
   
 
X = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10] 
W = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10] 
  
n = len(X) 
m = len(W) 
    
if (n == m) : 
    print weightedMean(X, W, n) 
else : 
    print "-1"