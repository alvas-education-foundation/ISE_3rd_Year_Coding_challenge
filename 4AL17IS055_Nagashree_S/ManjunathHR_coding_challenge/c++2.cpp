#include<iostream>

int main()
{
    int i, n, a=0, b=0;
    std::cin>>n;
    
    
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            if(i>1)
                a = a + 2;
        }
        else
        {
            b = a/2;
        }
    }

    if(n%2!=0)
    {
        std::cout<<a;;
    }
    else
    { 
        std::cout<<b;
    }
    
    return 0;
}