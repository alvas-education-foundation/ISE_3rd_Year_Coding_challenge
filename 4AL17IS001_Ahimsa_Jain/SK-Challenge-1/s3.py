3)	Given an array,X , of n  integers, calculate the respective first quartile (Q1), second quartile (Q2), and third quartile (Q3). It is guaranteed that ,Q1,Q2,Q3  are integers.

Input Format

•	The first line contains an integer,n , denoting the number of elements in the array.
•	The second line contains  n space-separated integers describing the array's elements.

Output format:
Print  lines of output in the following order:

1.	The first line should be the value of Q1.
2.	The second line should be the value of Q2.
3.	The third line should be the value of Q3 .

Constraint:
1.	n=[5 to 50]
2.	xi=[0 to 100]

def median(a, l, r): 
    n = r - l + 1
    n = (n + 1) // 2 - 1
    return n + l 
  
# Function to calculate IQR 
def IQR(a, n): 
  
    a.sort() 
  

    mid_index = median(a, 0, n) 
  

    Q1 = a[median(a, 0, mid_index)] 
 
    Q3 = a[mid_index + median(a, mid_index + 1, n)] 
  

    return (Q3 - Q1) 
  

if __name__=='__main__': 
    a = [1, 19, 7, 6, 5, 9, 12, 27, 18, 2, 15] 
    n = len(a) 
    print(IQR(a, n))