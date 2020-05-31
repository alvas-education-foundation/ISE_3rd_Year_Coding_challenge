#include <iostream>
#include<cstring>
using namespace std;
float sum(float , float);
int main()
{
    float num1,num2,total;
    cin>>num1>>num2;
    
    total=sum(num1,num2);
    cout<<total<<endl;
    return 0;
}
float sum(float a, float b)
{
     if(isalpha(a&&b))
    {
        cout<<"Error"<<endl;
    }
    else
    {
        float result=a+b;
        return result;
    }
}
