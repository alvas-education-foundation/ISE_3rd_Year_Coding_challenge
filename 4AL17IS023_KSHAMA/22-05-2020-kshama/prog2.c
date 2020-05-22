/*
Question:-
Program to check whether the number is Armstrong or not*/

#include<stdio.h>
#include<math.h>
#include int main(int a, char*b[])
{
int n;
n= atoi(b[1]);
int sum=0;
int temp=n;
int cnt=0;
while(n!=0)
{
n=n/10;
cnt++;
}
n=temp;
while(n!=0)
{
int rem=n%10;
sum=sum+pow(rem,cnt);
n=n/10;
}
if(temp==sum)
{
printf(“yes”);
}
else
{
printf(“no”);
}
return 0;
}
