/*
Question:
Given a square matrix, calculate the absolute difference between the sums of its diagonals. The function must return an integer representing the absolute diagonal difference.
The diagonalDifference takes the following parameter:
arr: an array of integers. 
Input Format
1.The first line contains a single integer,n , the number of rows and columns in the matrix arr. 
2.Each of the next  n lines describes a row,arr[i] , and consists of n space-separated integers arr[i][j].
Output Format
Print the absolute difference between the sums of the matrix's two diagonals as a single integer.
Constraint:
arr[i][j]={-100 to 100}
*/

#include <bits/stdc++.h>  
using namespace std; 

int difference(int arr[][MAX], int n) 
{ 
	int d1 = 0, d2 = 0; 

	for (int i = 0; i < n; i++) 
	{ 
		for (int j = 0; j < n; j++) 
		{ 
			if (i == j) 
				d1 += arr[i][j];
			if (i == n - j - 1) 
				d2 += arr[i][j]; 
		} 
	} 
	return abs(d1 - d2); 
} 
int main() 
{ 
	int n,m; 
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>arr[i][j];
	cout << difference(arr, n); 
	return 0; 
} 
