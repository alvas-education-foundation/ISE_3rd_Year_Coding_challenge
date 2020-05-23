/*
Question: For Loop
A for loop is a programming language statement which allows code to be repeatedly executed.

The syntax for this is

for ( <expression_1> ; <expression_2> ; <expression_3> )
    <statement>
expression_1 is used for intializing variables which are generally used for controlling terminating flag for the loop.
expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
expression_3 is generally used to update the flags/variables.
A sample loop will be

for(int i = 0; i < 10; i++) {
    ...
}
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
   int i,c,b;
    string a[11]={"even","odd","one","two","three","four","five","six","seven","eight","nine"};
    cin>>c>>b;
    for(i=c;i<=b;i++)
    {
        if((i>9) && (i%2==0))  cout<<a[0]<<endl;
        else if((i>9) && (i%2!=0)) cout<<a[1]<<endl;
        else    cout<<a[i+1]<<endl;
    } // Complete the code.
    return 0;
}


