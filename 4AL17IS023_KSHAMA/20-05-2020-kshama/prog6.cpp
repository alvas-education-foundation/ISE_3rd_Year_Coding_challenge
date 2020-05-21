/*
Question:-
Ternary Operator
A conditional operator is also known as ternary operator [exp ? true : false] which can be used to make an either-or choice. Write a C++ program to get a number from the user and find out whether it is odd or even.
INPUT & OUTPUT FORMAT:

The input is an integer denoting the given number.

If the given number is even, print "Even". Otherwise, print "Odd".*/

#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int n,v;
  std::cin>>n;
  v=n%2;
  if(v==0)
  {
    std::cout<<"Even";
  }
  else
    std::cout<<"Odd";
}