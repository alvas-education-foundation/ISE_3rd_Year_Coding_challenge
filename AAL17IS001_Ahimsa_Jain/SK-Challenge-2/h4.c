Question:-
You are given a number of sticks of varying lengths. You will iteratively cut the sticks into smaller sticks, discarding the shortest pieces until there are none left. At each iteration you will determine the length of the shortest stick remaining, cut that length from each of the longer sticks and then discard all the pieces of that shortest length. When all the remaining sticks are the same length, they cannot be shortened so discard them.
Given the lengths of n sticks, print the number of sticks that are left before each iteration until there are none left.
Input format:
The first line contains a single integer n, the size of arr. 
The next line contains  n space- separated integers, each an  arr[i], where each value represents the length of the ith stick.
Output format:
For each operation, print the number of sticks that are present before the operation on separate lines.
Constraints:
n=[1 to 1000]
arr[i]=[1 to 1000]


#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(1)
    {
        int min=a[0];
        int r=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=0)
            	r++;
        }
        if(r==0)
        	break;
        printf("%d\n",r);
        r=0;
        for(int i=1;i<n;i++)
        {
            if((a[i]<min) && (a[i]!=0))
            	min=a[i];
            if(min==0)
            	min=a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]!=0)
            	a[i]-=min;
        }
    }
    return 0;
}