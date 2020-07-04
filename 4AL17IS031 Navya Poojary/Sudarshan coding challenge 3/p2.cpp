Activity 2:
Given an integer, and find the super digit of the integer.
If x has only 1 digit, then its super digit is x.
Otherwise, the super digit of x is equal to the super digit of the sum of the digits of x.
You are given two numbers n  and k. The number p  is created by concatenating the string n*k   times.
The superDigit has the following parameter(s):
n: a string representation of an integer
k: an integer, the times to concatenate n to make p

Input Format:
The first line contains two space separated integers,n  and p.

Output Format:
Return the super digit of p.

Program:

#include<iostream> 
   
using namespace std; 
  
int digSum(int n) 
{ 
    int sum = 0; 
    while(n > 0 || sum > 9) 
    { 
        if(n == 0) 
        { 
            n = sum; 
            sum = 0; 
        } 
        sum += n % 10; 
        n /= 10; 
    } 
    return sum; 
} 
  
int main() 
{ 
    int n ,k,p;
    cin>>n>>k;
    p=n*k;
    cout << digSum(p); 
    return 0; 