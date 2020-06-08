1)Write a C++ Program to print right angled pyramid of numbers. 

Program:

#include <iostream>
using namespace std;

int main()
{

	int i, s, r, k=1;

	cout<<"Enter the number of rows: ";
	cin>>r;
	
	for(i=1; i<=r; i++) {
		for(s=i; s<r; s++) {
			cout<<"\t";
		}
		for(j=1; j<=i; j++) {
			cout<<k<<"\t";
			k++;
		}
		cout<<"\n";
	}

	return 0;
}