/* 
Question:-
Addition of two numbers a Twist
1. Using a method, pass two variables and find the sum of two numbers.

Test case:

Number 1 � 20

Number 2 � 20.38

Sum = 40.38

There were a total of 4 test cases. Once you compile 3 of them will be shown to you and 1 will be a hidden one. You have to display error message if numbers are not numeric.

/*

#include<stdio.h>
addition(int x, float y)
{
    float ans;
    ans = (float)x + y;
    printf("Answer : %.2f",ans);
}
int main()
{
   int a;
   float b;
   printf("enter first number : ");
   scanf("%d",&a);
   printf("enter second number : ");
   scanf("%f",&b);
   addition(a, b);
}


