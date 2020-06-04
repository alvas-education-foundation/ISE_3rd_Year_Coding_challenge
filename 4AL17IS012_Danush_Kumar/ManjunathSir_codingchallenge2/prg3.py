''' Program to remove duplicate characters from String. '''

n=input()
inpt=""
for i in n: 
	if(i in inpt): 
		pass
	else: 
		inpt=inpt+i 
	print(inpt)