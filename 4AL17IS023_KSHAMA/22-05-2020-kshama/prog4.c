/*
Question:-
Check whether a given number is perfect number or not.
*/

#include<stdio.h>

int is_perfect_number(int n)
{
    int sum = 1;

    for (int i=2; i*i<=n; i++)
    {
        if (n%i==0)
        {
            if(i*i!=n)
                sum = sum + i + n/i;
            else
                sum=sum+i;
        }
    }

    if (sum == n && n != 1)
        return 1;

    return 0;
}

int main()
{
    int n;
    printf(“\nEnter a number : “);
    scanf(“%d”,&n);
    if (is_perfect_number(n))
        printf(“%d is a perfect number\n”,n);
    else
        printf(“%d is not a perfect number\n”,n);

    return 0;
}

