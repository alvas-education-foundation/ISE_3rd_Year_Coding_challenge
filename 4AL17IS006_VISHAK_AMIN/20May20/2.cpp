//Find the a power n using c++ code.



#include<iostream>
using namespace std;
int power(int a, int n)
{
    int res = 1;
    for(int i = 1;i <= n;i++)
        {
            res = res * a;
        }

    return res;
}

int main(){
    int a,n;
    cout << "Enter the value of a"<< endl;
     cin >> a;
     cout << "Enter the value of n"<< endl;
     cin >> n;
     int r = power(a,n);
     cout << "The value of "<<a <<" power "<<n<<" is "<<r;

}