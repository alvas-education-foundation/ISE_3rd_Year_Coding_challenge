/*
Activity 1
Your local library needs your help! Given the expected and actual return dates for a library book, create a program that calculates the fine (if any). 
The fee structure is as follows:
1.If the book is returned on or before the expected return date, no fine will be charged (i.e.:fine=0).
2.If the book is returned after the expected return day but still within the same calendar month and year as the expected return date :fine=Rs.15*(No. Of Days)
3.If the book is returned after the expected return month but still within the same calendar year as the expected return date, the fine=Rs.500*(No. Of Days).
4.If the book is returned after the calendar year in which it was expected, there is a fixed fine of Rs. 10000.

Input Format
1.The first line contains 3 space-separated integers denoting the respective DD,MM, YY on which the book was actually returned.
2.The second line contains 3 space-separated integers denoting the respective DD,MM, YY on which the book was expected to be returned (due date).

Constraints
1.DD={1 to 31}
2.MM={1 to 12}
3.YY={1 to 3000}
4.Accept only valid dates

Output Format
Print a single integer denoting the library fine for the book received as input.*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int d1; 
    int m1; 
    int y1; 
    scanf("%d %d %d",&d1,&m1,&y1);
    int d2; 
    int m2; 
    int y2; 
    scanf("%d %d %d",&d2,&m2,&y2);
    if(y2==y1){
        if(m2==m1){
            if(d1<d2)
            printf("0");
            else
            printf("%d",15*(d1-d2));
        }
        else{
             if(m1<m2)
            printf("0");
            else
            printf("%d",500*(m1-m2));
        }
    }
    else{
         if(y1<y2)
            printf("0");
        else
        printf("%d",10000*(y1-y2));
    }
    return 0;
}