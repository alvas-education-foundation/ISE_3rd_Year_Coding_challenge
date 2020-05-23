#include<stdio.h>
int main()
{
      int num1,num2, sub;
      printf("Enter Two Numbers :\n");
      scanf("%d %d", &num1, &num2);
      sub=num1-num2;
      printf("\nDifference Between %d & %d = %d",num1,num2,sub);
      return 0;
}