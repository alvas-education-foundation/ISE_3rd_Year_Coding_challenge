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