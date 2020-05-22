PROGRAM-1

Given two positive integers,a  and b(a<=b), separated by a newline.
Output Format:
For each integer  in the interval  :
If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else ifn>9  and it is an even number, then print "even".
Else if n>9 and its odd number,then print "odd".

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    string c[]={"","one","two","three","four","five","six","seven","eight","nine"};
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        cout<<((i<=9)?c[i]:((i%2==0)?"even":"odd"))<<endl;
    return 0;
}

PROGRAM-2

To write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

#include<stdio.h>
using namespace std; 
int max_of_four(int a,int b,int c, int d){
if(a > b){
    if(a > c){
        if(a>d)return a;
        else return d;
    }
    else {
        if(c > d)return c;
        else return d;
    }
}
else{
    if(b > c){
        if(b > d)return b;
        else return d;
    }
    else{
        if(c > d)return c;
        else return d;
    }
}
}
int main() {

int a, b, c, d;
scanf("%d %d %d %d", &a, &b, &c, &d);
int ans = max_of_four(a, b, c, d);
printf("%d", ans);
return 0;
}

INPUT:
3
4
6
5

OUTPUT:
6



INPUT:
8
11

OUTPUT:
eight
nine
even
odd

PROGRAM-3

To complete the function void update(int *a,int *b), which reads two integers as argument, and sets  with the sum of them, and  with the absolute difference of them.
a'=a=b;
b'=|a-b|
#include <stdio.h>

void update(int *a,int *b) {
    int sum = *a + *b;
    int absDifference = *a - *b > 0 ? *a - *b : -(*a - *b);
    *a = sum;
    *b = absDifference; 
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
INPUT:
4
5

OUTPUT:
9
1
