//length of a string

#include<iostream>
#include<stdio.h>
 
using namespace std;
 
int main()
{
	char a[30];
	int i;
	cout<<"Enter a string:";
	gets(a);
	
	for(i=0;a[i]!='\0';++i);
	
	cout<<"\nLength of the string '"<<a<<"' is "<<i;
 
	return 0;
}