/*
Question:-

Program to generate Fibonacci series upto n value using Recursive method*/

#include<stdio.h>
int Fibonacci(int n)
{
    if (n <= 1) 
        return n; 
    return Fibonacci(n - 1) + Fibonacci(n - 2); 
}
int main()
{
    int n, sum = 0;
    printf("Enter the nth value: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    while(Fibonacci(sum) <= n)
    {
        printf("%d ", Fibonacci(sum));
        sum++;
    }
}

