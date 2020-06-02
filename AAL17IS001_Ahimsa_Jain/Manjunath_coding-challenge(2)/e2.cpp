2. Find the row with maximum number of 1s?
Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s.
Example
Input matrix
0 1 1 1
0 0 1 1
1 1 1 1  // this row has maximum 1s
0 0 0 0

Program:

#include<bits/stdc++.h> 
#define N 4 
using namespace std; 
 
void findMax (int arr[][N]) 
{ 
	int row = 0, i, j; 
	for (i=0, j=N-1; i<N;i++) 
	{ 
		while (arr[i][j] == 1 && j >= 0) 
		{ 
			row = i; 
			j--; 
		} 
	} 
	cout << "Row number  with maximum 1s is " << row+1; 
} 
 
int main() 
{ 
	int arr[N][N] = {{0, 1, 1, 1},
			{0, 0, 1, 1},
			{1, 1, 1, 1},
			{0, 0, 0, 0}}; 
	findMax(arr); 
	return 0; 
} 
