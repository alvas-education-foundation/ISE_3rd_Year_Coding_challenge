   
# Function to find N-th term 

def findNthTerm(n): 
      
    # If n is even 
    if (n % 2 == 0): 
        n = n // 2
        n = 2 * (n - 1) 
        print( n // 2) 
  
    # If n is odd 
    else: 
        n = (n // 2) + 1
        n = 2 * (n - 1) 
        print(n) 
   
# Driver code 
if __name__ == "__main__": 
    X = 10
    findNthTerm(X); 
       
    X = 7; 
    findNthTerm(X) 