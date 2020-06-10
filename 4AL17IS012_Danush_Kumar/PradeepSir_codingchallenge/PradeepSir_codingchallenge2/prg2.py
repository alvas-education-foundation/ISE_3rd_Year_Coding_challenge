''' Program to Multiply Two Matrix Using Multi-dimensional Arrays '''

A=[]
n=int(input("Enter N for N x N matrix: "))         
print("Enter the element ::>")
for i in range(n): 
   row=[]                                      
   for j in range(n): 
      row.append(int(input()))           
      A.append(row)                      
print(A)

   
B=[]
n=int(input("Enter N for N x N matrix : "))           
print("Enter the element ::>")
for i in range (n): 
   row=[]                                     
   for j in range(n): 
      row.append(int(input()))           
      B.append(row)                      
print(B)

                                          
result = [[0,0,0], [0,0,0], [0,0,0]] 
for i in range(len(A)): 
   for j in range(len(B[0])): 
      for k in range(len(B)): 
         result[i][j] += A[i][k] * B[k][j] 
print("The Resultant Matrix Is ::>")
for r in result: 
   print(r) 