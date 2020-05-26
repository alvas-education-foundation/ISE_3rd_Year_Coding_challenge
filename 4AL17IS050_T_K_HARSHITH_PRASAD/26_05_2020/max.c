#include<stdio.h>
int pow(int a,int n)
{
    int b=a;
    if(n==0)        //return 1 when n value is 0
    {
        return 1;
    }
    while(n>1)     //calculate the power value
    {
        a*=b;
        n--;
    }
    return a;
}
void main()
{
    char a[50];
    int n,i,j=0,decimal=0;
    printf("Enter the base 17 number:");
    scanf("%s",&a);                    //get the input as string
    n=strlen(a);
    while(n>0)
    {
        if(a[n-1]>64&&a[n-1]<72)      //check the char between A to G
        {
            i=a[n-1]-55;              //convert A=10,b=11 ..... G=16
            decimal+=i*pow(17,j);     //calculate the decimal value
            n--,j++;
        }
        else                          //check for number 0 to 9
        {
            i=a[n-1]-48;              //convert char value to int
            decimal+=i*pow(17,j);
            n--,j++;
        }
    }
    printf("%d\n",decimal);           // print the converted decimal value
}