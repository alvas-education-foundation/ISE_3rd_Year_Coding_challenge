1)	Develop the programs in c, c++, java or python to the solve the following problem statements
Activity 1:
Given an array, , of  integers, calculate and print the respective mean, median, and mode on separate lines. If your array contains more than one modal value, choose the numerically smallest one.
Input format:
1.	The first line contains an integer, N, denoting the number of elements in the array.

2.	The second line contains  N space-separated integers describing the array's elements.

Output format:
Print  lines of output in the following order:
1.	Print the mean on a new line, to a scale of  decimal place 
2.	Print the median on a new line, to a scale of  decimal place 
3.	Print the mode on a new line; if more than one such value exists, print the numerically smallest one.
Constraints:
•	N belongs to [10, 2500]
•	X belongs to [0, 10000]
def fMean(a, n): 
  
    sum = 0
    for i in range( 0, n): 
        sum += a[i] 
      
    return float(sum/n) 
  

def findMedian(a, n): 
  

    sorted(a) 
  

    if n % 2 != 0: 
        return float(a[n/2]) 
      
    return float((a[int((n-1)/2)] +
                  a[int(n/2)])/2.0) 

a = [ 1, 3, 4, 2, 7, 5, 8, 6 ] 
n = len(a) 
print("Mean =", findMean(a, n)) 
print("Median =", findMedian(a, n)) 