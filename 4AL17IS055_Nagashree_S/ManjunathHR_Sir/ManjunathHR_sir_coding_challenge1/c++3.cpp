#include<iostream>
#include<cstring>
int pow(int a,int n)
{
    int b=a;
    if(n==0)      
    {
        return 1;
    }
    while(n>1)     
    {
        a*=b;
        n--;
    }
    return a;
}
int main()
{
    char a[50];
    int n,i,j=0,decimal=0;
    std::cin>>a;                    
    n=strlen(a);
    while(n>0)
    {
        if(a[n-1]>64&&a[n-1]<72)      
        {
            i=a[n-1]-55;             
            decimal+=i*pow(17,j);     
            n--,j++;
        }
        else                         
        {
            i=a[n-1]-48;              
            decimal+=i*pow(17,j);
            n--,j++;
        }
    }
    std::cout<<decimal;       
	return 0;    
}