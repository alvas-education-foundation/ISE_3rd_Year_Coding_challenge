/*
Question:
1)Develop the programs in c, c++, java or python to the solve the following problem statements
Activity 1:
Given an array x,n , of  integers, calculate and print the respective mean, median, and mode on separate lines. If your array contains more than one modal value, choose the numerically smallest one.
Input format:
1.The first line contains an integer, N, denoting the number of elements in the array.

2.The second line contains  N space-separated integers describing the array's elements.

Output format:
Print  lines of output in the following order:
1.Print the mean on a new line, to a scale of  decimal place 
2.Print the median on a new line, to a scale of  decimal place 
3.Print the mode on a new line; if more than one such value exists, print the numerically smallest one.
Constraints:
•N belongs to [10, 2500]
•X belongs to [0, 10000]

*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const int max_n = 1e5+5;

int main() 
{
    
    int n; cin>>n; int a[max_n]; long sum=0;
    
    for(auto i=0;i<n;i++) 
    {
        cin>>a[i];
        sum+=a[i];
    }
    
    double mean, median;
    
    mean = (double)sum/n;
    
    sort(a,a+n);
    if(n%2==0) 
        median = (double)(a[n/2-1]+a[n/2])/2;
    else 
        median = a[n/2];
    
    int mode=a[0], mx=1, cnt=1;
    for(auto i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1]) {
            ++cnt;
        }
        else 
            cnt=1;
        if(cnt>mx) 
        {
            mx=cnt;
            mode=a[i];
        }
    }
    
    cout<<mean<<"\n"<<median<<"\n"<<mode;
    
    return 0;
}