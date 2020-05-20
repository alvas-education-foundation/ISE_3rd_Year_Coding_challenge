//Count even and odd digits in an Integer


#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int n,m,odd = 0,even = 0 ;
  int n1;
  cin >> n;
  while (n>0) {
      n1 = n%10;
       

        if (n1 % 2 ==0 )
         
         {
             even = even + n1;


         }
         else
         {
             odd = odd + n1;    
         }
        n = n/10;
  
  }
         if (odd == even)
         {
             cout << "Yes";
         }
         else 
         {
             cout << "No";
         }

          
     }

