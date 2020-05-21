/*
Question:- Conditional Statement

Input Format:
A single integer denoting n.

Output Format:
If 1<=n<=9, then print the lowercase English word corresponding to the number; otherwise, print Greater than 9 instead.*/

#include <bits/stdc++.h>

using namespace std;



int main()
{
    int in;
string num[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

cin >> in;

if(in > 9){
    cout << num[0];
}
else{
    cout << num[in];
}
}
