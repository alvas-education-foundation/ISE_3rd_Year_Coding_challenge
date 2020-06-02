This is an easy problem. 

All you need to do is to print the first 10 multiples of the number given in input.

Input:

An integer N, whose first 10 multiples need to be printed.

Output:

First 10 multiples of number given in input

Constraints:

1 <= N <= 5000

SAMPLE INPUT 
3
SAMPLE OUTPUT 
3
6
9
12
15
18
21
24
27
30

#include <cmath>

#include <cstdio>

#include <vector>

#include <iostream>

#include <algorithm>

using namespace std;


 

int main()

{

int n;

cin>>n;

int x;

for(int i=1;i<=10;i++)

{

x=i*n;

cout<<x<<endl;

}

}