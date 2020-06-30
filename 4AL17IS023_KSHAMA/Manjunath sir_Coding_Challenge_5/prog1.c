/*1. Program to count the total number of ways to reach the Nth stair is discussed here.

DESCRIPTION: There are n stairs, a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs at a time.

Count the total number of ways, the person can reach the top.

Sample Input:

4 (Number of stairs)

Sample Output:

5 (Number of ways)

Explanation:

Way 1: 1-1-1-1-1
Way 2: 1-2-1
Way 3: 2-1-1
Way 4: 1-1-2
Way 5: 2-2
*/

#include<stdio.h>
int fib(int n)
{
    if(n<=1)
        return n;
    return fib(n-1)+fib(n-2);
}  
int countWays(int s)
{
    return fib(s+1);
}
int main ()
{
    int steps;
    scanf(“%d”,&steps);
    printf(“%d”, countWays(steps));
    return 0;
}  