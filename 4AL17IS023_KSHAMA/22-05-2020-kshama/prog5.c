/*
Question:-
Program to find the sum of numbers in a given range.
*/

#include<stdio.h>
int main()
{
    /*fill the code*/
    int start, end;
    scanf(“%d”,&start);
    scanf(“%d”,&end);
    int i, sum = 0;
    for(i = start; i <= end; i++)
    {
        sum = sum + i;
    }
    printf(“%d”,sum);
    return 0;
}