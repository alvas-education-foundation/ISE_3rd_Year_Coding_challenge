/*
Question:-
0, 0, 2, 1, 4, 2, 6, 3, 8, 4, 10, 5, 12, 6, 14, 7, 16, 8
This series is a mixture of 2 series all the odd terms in this series form even numbers in ascending order and every even terms is derived from the previous  term using the formula (x/2)

Write a program to find the nth term in this series.

The value n in a positive integer that should be read from STDIN the nth term that is calculated by the program should be written to STDOUT. Other than the value of the nth term no other characters /strings or message should be written to STDOUT.

For example if n=10,the 10 th term in the series is to be derived from the 9th term in the series. The 9th term is 8 so the 10th term is (8/2)=4. Only the value 4 should be printed to STDOUT.

You can assume that the n will not exceed 20,000.
*/

#include<stdio.h>

int main() {
//code
int n;
scanf(�%d�, &n);
if(n % 2 == 1)
{
int a = 1;
int r = 2;
int term_in_series = (n+1)/2;
int res = 2 * (term_in_series � 1);
printf(�%d �, res);
}
else
{
int a = 1;
int r = 3;
int term_in_series = n/2;

int res = term_in_series � 1;
printf(�%d �, res);
}

return 0;
}