1) Write a C++ Program to print right angled pyramid of numbers.

SOLUTION:
#include <iostream> 
using namespace std; 
void numpat(int n) 
{ 
	// initializing starting number 
	int num = 1; 
 
	for (int i = 0; i < n; i++) { 

		 
		for (int j = 0; j <= i; j++) 
			cout << num << " "; 

		// Incrementing number at each column 
		num = num + 1; 

		// Ending line after each row 
		cout << endl; 
	} 
} 

// Driver Function 
int main() 
{ 
	int n = 5; 
	numpat(n); 
	return 0; 
} 
