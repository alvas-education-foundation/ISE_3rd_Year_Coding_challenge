/*
Question:- Functions
Input Format:
Input will contain four integers -a,b,c,d , one in each line.

Output Format:
Print the greatest of the four integers.
PS: I/O will be automatically handled
*/

#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d)
{
return a>b?(c>d?(c>a?c:a):(d>a?d:a)):(c>d?(c>b?c:b):(d>b?d:b)); 
}void printMax(int a, int b, int c, int d){
    int max = a;

    if(b > max){
        max = b;
    }

    if(c > max){
        max = c;
    }

    if(d > max){
        max = d;
    }

    printf("%d\n", max);
}

void printMaxTwo(int a, int b, int c, int d){
    printf("%d\n", ((a>= b && a >= c && a >= d)?a:(b > a && b > c && b > d)?b:(c > a && c > b && c > d)?c:d));
}


int main() {

    int  x,y,z,k;
    int sum;
    cin>>x>>y>>z>>k;
   sum= max_of_four(x,y,z,k);
   cout<<sum;
    
    return 0;
}


